param([switch]$SelfTest)
$ErrorActionPreference = 'Stop'

function Get-GameDirectory([string]$Root) {
    if (Test-Path -LiteralPath (Join-Path $Root 'portable.txt')) { return $Root }
    $local = [Environment]::GetFolderPath('LocalApplicationData')
    if ([string]::IsNullOrEmpty($local)) { return Join-Path $Root 'SonicGenerationsRecomp' }
    return Join-Path $local 'SonicGenerationsRecomp'
}
function Quote-NativeArgument([string]$Value) {
    # Windows CRT argument rules, not cmd.exe quoting. Preserve trailing slashes.
    return '"' + (($Value -replace '(\\*)"', '$1$1\"') -replace '(\\+)$', '$1$1') + '"'
}
if ($SelfTest) {
    if ((Quote-NativeArgument 'C:\Game dump\') -cne '"C:\Game dump\\"') { throw 'Trailing slash quoting failed' }
    if ((Quote-NativeArgument 'C:\a & b\game.iso') -cne '"C:\a & b\game.iso"') { throw 'Path quoting failed' }
    if ((Quote-NativeArgument 'a"b') -cne '"a\"b"') { throw 'Quote escaping failed' }
    $root = Join-Path ([IO.Path]::GetTempPath()) ([Guid]::NewGuid().ToString())
    try {
        [IO.Directory]::CreateDirectory($root) | Out-Null
        $expected = Join-Path ([Environment]::GetFolderPath('LocalApplicationData')) 'SonicGenerationsRecomp'
        if ((Get-GameDirectory $root) -ne $expected) { throw 'User storage path mismatch' }
        [IO.File]::WriteAllText((Join-Path $root 'portable.txt'), '')
        if ((Get-GameDirectory $root) -ne $root) { throw 'Portable storage path mismatch' }
    } finally { if (Test-Path -LiteralPath $root) { Remove-Item -LiteralPath $root -Recurse -Force } }
    Write-Output 'Launcher argument and storage-path tests passed'
    exit 0
}

Add-Type -AssemblyName System.Windows.Forms
Add-Type -AssemblyName System.Drawing
[Windows.Forms.Application]::EnableVisualStyles()
$script:Root = $PSScriptRoot
$script:Exe = Join-Path $script:Root 'SonicGenerationsRecomp.exe'
$script:JobProcess = $null
$script:LogDirectory = Join-Path $script:Root 'diagnostics'
$form = New-Object Windows.Forms.Form
$form.Text = 'Sonic Generations Recompiled - Windows / Vulkan'
$form.ClientSize = New-Object Drawing.Size(780, 540)
$form.MinimumSize = New-Object Drawing.Size(796, 579)
$form.StartPosition = 'CenterScreen'
$form.Font = New-Object Drawing.Font('Segoe UI', 10)
$form.AllowDrop = $true

function Add-Label([string]$Text, [int]$X, [int]$Y, [int]$Width) {
    $label = New-Object Windows.Forms.Label
    $label.Text = $Text; $label.SetBounds($X, $Y, $Width, 26)
    $form.Controls.Add($label)
    return $label
}
function Add-Button([string]$Text, [int]$X, [int]$Y, [int]$Width) {
    $button = New-Object Windows.Forms.Button
    $button.Text = $Text; $button.SetBounds($X, $Y, $Width, 34)
    $form.Controls.Add($button)
    return $button
}
$null = Add-Label 'Diagnostic build: game compatibility is not yet confirmed. Use your own Xbox 360 dump.' 16 12 750
$null = Add-Label 'Game files are installed here (save files are in the save subfolder):' 16 44 748
$destination = New-Object Windows.Forms.TextBox
$destination.ReadOnly = $true; $destination.SetBounds(16, 72, 748, 28)
$destination.Text = Get-GameDirectory $script:Root
$form.Controls.Add($destination)
$null = Add-Label 'ISO / XISO image or extracted dump folder (you can also drag it here):' 16 110 748
$source = New-Object Windows.Forms.TextBox
$source.SetBounds(16, 139, 748, 28); $form.Controls.Add($source)
$chooseIso = Add-Button 'Choose ISO...' 16 178 135
$chooseFolder = Add-Button 'Choose folder...' 159 178 145
$install = Add-Button 'Install / extract' 312 178 155
$check = Add-Button 'Check installation' 475 178 160
$play = Add-Button 'Play (Vulkan)' 16 220 170
$openFiles = Add-Button 'Open game files' 194 220 160
$openLogs = Add-Button 'Open logs' 362 220 130
$status = Add-Label 'Ready. Install an image or a folder before launching the game.' 16 269 748
$output = New-Object Windows.Forms.TextBox
$output.SetBounds(16, 303, 748, 220); $output.Multiline = $true; $output.ReadOnly = $true
$output.ScrollBars = 'Both'; $output.WordWrap = $false
$output.Anchor = 'Top,Bottom,Left,Right'; $form.Controls.Add($output)
$script:BusyControls = @($source, $chooseIso, $chooseFolder, $install, $check, $play)

function Show-Failure([string]$Message) {
    [Windows.Forms.MessageBox]::Show($Message, 'Sonic Generations Recompiled', 'OK', 'Error') | Out-Null
}
function Start-Runtime([string]$Operation, [string[]]$Arguments) {
    if ($null -ne $script:JobProcess) { return }
    try {
        if (!(Test-Path -LiteralPath $script:Exe -PathType Leaf)) { throw 'Runtime EXE not found. Extract the entire build ZIP first.' }
        $destination.Text = Get-GameDirectory $script:Root
        [IO.Directory]::CreateDirectory($script:LogDirectory) | Out-Null
        $script:Operation = $Operation
        $stamp = Get-Date -Format 'yyyyMMdd-HHmmss-fff'
        $script:OutLog = Join-Path $script:LogDirectory "$Operation-$stamp.log"
        $script:ErrLog = Join-Path $script:LogDirectory "$Operation-$stamp.stderr.log"
        $script:ExitLog = Join-Path $script:LogDirectory "$Operation-$stamp.exit-code.txt"
        $env:SONIC_RENDER_BACKEND = 'vulkan'
        $env:SONIC_VULKAN_DIRECT_DRAW = '1'
        $env:SONIC_VULKAN_VALIDATION = '0'
        $parameters = @{
            FilePath = $script:Exe; WorkingDirectory = $script:Root
            PassThru = $true; WindowStyle = 'Hidden'
            RedirectStandardOutput = $script:OutLog; RedirectStandardError = $script:ErrLog
        }
        if ($Arguments.Count) { $parameters.ArgumentList = ($Arguments | ForEach-Object { Quote-NativeArgument $_ }) -join ' ' }
        $script:JobProcess = Start-Process @parameters
        $null = $script:JobProcess.Handle # Retain process handle so ExitCode survives a fast exit.
        foreach ($control in $script:BusyControls) { $control.Enabled = $false }
        $status.Text = "$Operation running. Please wait; logs are in diagnostics."
        $output.Clear()
    } catch { Show-Failure $_.Exception.Message }
}
$chooseIso.Add_Click({
    $dialog = New-Object Windows.Forms.OpenFileDialog
    $dialog.Filter = 'Xbox 360 disc image (*.iso;*.xiso)|*.iso;*.xiso|All files (*.*)|*.*'
    try { if ($dialog.ShowDialog() -eq 'OK') { $source.Text = $dialog.FileName } } finally { $dialog.Dispose() }
})
$chooseFolder.Add_Click({
    $dialog = New-Object Windows.Forms.FolderBrowserDialog
    $dialog.Description = 'Select the Xbox 360 dump folder containing default.xex'
    try { if ($dialog.ShowDialog() -eq 'OK') { $source.Text = $dialog.SelectedPath } } finally { $dialog.Dispose() }
})
$install.Add_Click({
    try {
        $path = (Resolve-Path -LiteralPath $source.Text.Trim()).ProviderPath
        $confirm = [Windows.Forms.MessageBox]::Show("Install to:`n$($destination.Text)`n`nExisting game files may be replaced. Back up saves first.", 'Install game', 'YesNo', 'Warning')
        if ($confirm -eq 'Yes') { Start-Runtime 'install' @('--install', $path) }
    } catch { Show-Failure $_.Exception.Message }
})
$check.Add_Click({ Start-Runtime 'check' @('--check') })
$play.Add_Click({ Start-Runtime 'game' @() })
$openFiles.Add_Click({
    try { $path = Get-GameDirectory $script:Root; [IO.Directory]::CreateDirectory($path) | Out-Null; Start-Process explorer.exe -ArgumentList (Quote-NativeArgument $path) }
    catch { Show-Failure $_.Exception.Message }
})
$openLogs.Add_Click({
    try { [IO.Directory]::CreateDirectory($script:LogDirectory) | Out-Null; Start-Process explorer.exe -ArgumentList (Quote-NativeArgument $script:LogDirectory) }
    catch { Show-Failure $_.Exception.Message }
})
$form.Add_DragEnter({ if ($null -eq $script:JobProcess -and $_.Data.GetDataPresent([Windows.Forms.DataFormats]::FileDrop)) { $_.Effect = 'Copy' } })
$form.Add_DragDrop({ if ($null -eq $script:JobProcess) { $files = $_.Data.GetData([Windows.Forms.DataFormats]::FileDrop); if ($files.Count) { $source.Text = $files[0] } } })
$timer = New-Object Windows.Forms.Timer
$timer.Interval = 500
$timer.Add_Tick({
    if ($null -eq $script:JobProcess) { return }
    try {
        $lines = @()
        foreach ($file in @($script:OutLog, $script:ErrLog)) {
            if (Test-Path -LiteralPath $file) { $lines += Get-Content -LiteralPath $file -Tail 60 -ErrorAction SilentlyContinue }
        }
        $output.Text = $lines -join [Environment]::NewLine
        if ($script:JobProcess.HasExited) {
            $script:JobProcess.WaitForExit()
            $code = $script:JobProcess.ExitCode
            [IO.File]::WriteAllText($script:ExitLog, [string]$code)
            $script:JobProcess.Dispose(); $script:JobProcess = $null
            foreach ($control in $script:BusyControls) { $control.Enabled = $true }
            $status.Text = "$($script:Operation) finished: exit code $code. See logs for details."
        }
    } catch { $status.Text = "Log/status error: $($_.Exception.Message)" }
})
$form.Add_FormClosing({
    if ($null -ne $script:JobProcess) { $_.Cancel = $true; Show-Failure 'Wait for installation/check to finish, or close the game window before closing the launcher.' }
})
$timer.Start()
try { [void]$form.ShowDialog() } finally { $timer.Stop(); $timer.Dispose(); $form.Dispose() }
