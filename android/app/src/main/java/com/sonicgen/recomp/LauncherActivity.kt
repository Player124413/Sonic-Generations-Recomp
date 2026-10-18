package com.sonicgen.recomp

import android.app.Activity
import android.app.AlertDialog
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.view.Gravity
import android.view.ViewGroup
import android.widget.Button
import android.widget.LinearLayout
import android.widget.ScrollView
import android.widget.TextView
import android.widget.Toast

/**
 * Launcher home screen: install state, import, play, and entry points to
 * settings and the touch layout editor. Everything writes the same
 * config.toml the native runtime reads, so launcher and game never disagree.
 */
class LauncherActivity : Activity() {

    private lateinit var statusView: TextView
    private lateinit var playButton: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val root = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(dp(24), dp(24), dp(24), dp(24))
        }
        val scroll = ScrollView(this).apply { addView(root) }
        setContentView(scroll)

        root.addView(TextView(this).apply {
            text = "Sonic Generations Recomp"
            textSize = 26f
            gravity = Gravity.CENTER_HORIZONTAL
            setPadding(0, dp(8), 0, dp(4))
        })
        root.addView(TextView(this).apply {
            text = "Статическая рекомпиляция Xbox 360 · Vulkan · Android"
            textSize = 14f
            gravity = Gravity.CENTER_HORIZONTAL
            setPadding(0, 0, 0, dp(16))
        })

        statusView = TextView(this).apply {
            textSize = 15f
            setPadding(0, dp(8), 0, dp(16))
        }
        root.addView(statusView)

        playButton = Button(this).apply {
            text = "▶  Играть"
            textSize = 18f
            setOnClickListener {
                // Ready means: installed, or imported and waiting for the
                // first-launch install the native side performs.
                val ready = AppFiles.isGameInstalled(this@LauncherActivity) ||
                    AppFiles.pendingInstallFile(this@LauncherActivity).isFile ||
                    GameImporter.ensurePendingInstall(this@LauncherActivity)
                if (ready) {
                    startActivity(Intent(this@LauncherActivity, GameActivity::class.java))
                } else {
                    Toast.makeText(this@LauncherActivity, "Сначала импортируйте игру", Toast.LENGTH_LONG).show()
                }
            }
        }
        root.addView(playButton, matchParams(bottomMargin = dp(12)))

        root.addView(Button(this).apply {
            text = "Импорт игры (папка с default.xex)…"
            setOnClickListener { pickFolder() }
        }, matchParams(bottomMargin = dp(8)))

        root.addView(Button(this).apply {
            text = "Импорт игры (ISO / XISO)…"
            setOnClickListener { pickIso() }
        }, matchParams(bottomMargin = dp(16)))

        root.addView(Button(this).apply {
            text = "Настройки (рендер, качество, ETC2…)"
            setOnClickListener { startActivity(Intent(this@LauncherActivity, SettingsActivity::class.java)) }
        }, matchParams(bottomMargin = dp(8)))

        root.addView(Button(this).apply {
            text = "Редактор сенсорного управления"
            setOnClickListener { startActivity(Intent(this@LauncherActivity, TouchEditorActivity::class.java)) }
        }, matchParams(bottomMargin = dp(16)))

        root.addView(TextView(this).apply {
            text = "Нужна собственная легальная копия Sonic Generations (Xbox 360): " +
                "дамп ISO/XISO или распакованная папка с default.xex. Файлы игры в проект не входят."
            textSize = 12f
        })
    }

    override fun onResume() {
        super.onResume()
        refreshStatus()
    }

    private fun refreshStatus() {
        val installed = AppFiles.isGameInstalled(this)
        // Imported but not installed yet is a ready-to-play state: the
        // native runtime installs the copy on first launch. Treating it
        // as "not installed" dead-locked the Play button before.
        val imported = !installed &&
            (AppFiles.pendingInstallFile(this).isFile || GameImporter.findImportedSource(this) != null)
        val settings = Settings.load(this)
        val renderer = when (settings.renderMode) {
            Settings.RENDER_NATIVE -> "Нативный Vulkan"
            Settings.RENDER_REFERENCE -> "Эталонный (reference)"
            else -> "Выключен (null)"
        }
        val sizeMb = AppFiles.directorySize(AppFiles.assetsDir(this)) / (1024 * 1024)
        statusView.text = buildString {
            append(
                when {
                    installed -> "Игра установлена ✓"
                    imported -> "Игра импортирована ✓ — установка при первом запуске"
                    else -> "Игра не установлена"
                }
            )
            append("\nРендер: ").append(renderer)
            append("\nМасштаб рендера: ").append((settings.renderScale * 100).toInt()).append('%')
            append("\nТекстуры: ").append(
                when (settings.textureCompression) {
                    Settings.TEX_ETC2 -> "ETC2"
                    Settings.TEX_OFF -> "RGBA8 (без сжатия)"
                    else -> "Авто (ETC2)"
                }
            )
            append("\nСенсорное управление: ").append(if (settings.touchControls) "вкл" else "выкл")
            append("\nДанные игры: ").append(sizeMb).append(" МБ")
        }
        playButton.isEnabled = installed || imported
    }

    private fun pickFolder() {
        val intent = Intent(Intent.ACTION_OPEN_DOCUMENT_TREE)
        intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION or Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION)
        startActivityForResult(intent, REQUEST_FOLDER)
    }

    private fun pickIso() {
        val intent = Intent(Intent.ACTION_OPEN_DOCUMENT)
        intent.addCategory(Intent.CATEGORY_OPENABLE)
        intent.type = "*/*"
        intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION or Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION)
        startActivityForResult(intent, REQUEST_ISO)
    }

    @Suppress("DEPRECATION")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (resultCode != RESULT_OK) return
        val uri: Uri = data?.data ?: return
        val isTree = requestCode == REQUEST_FOLDER
        try {
            contentResolver.takePersistableUriPermission(uri, Intent.FLAG_GRANT_READ_URI_PERMISSION)
        } catch (_: SecurityException) {
            // Non-persistable provider; the copy below still works now.
        }

        val progress = TextView(this).apply { text = "Подготовка…" }
        val dialog = AlertDialog.Builder(this)
            .setTitle("Импорт игры")
            .setView(progress)
            .setCancelable(false)
            .create()
        dialog.show()

        GameImporter.importAsync(this, uri, isTree,
            onProgress = { message -> runOnUiThread { progress.text = message } },
            onDone = { success, message ->
                runOnUiThread {
                    dialog.dismiss()
                    if (success) {
                        Toast.makeText(
                            this,
                            "Импорт завершён. Установка выполнится при первом запуске игры.",
                            Toast.LENGTH_LONG
                        ).show()
                    } else {
                        AlertDialog.Builder(this)
                            .setTitle("Импорт не удался")
                            .setMessage(message)
                            .setPositiveButton("OK", null)
                            .show()
                    }
                    refreshStatus()
                }
            })
    }

    private fun dp(value: Int): Int = (value * resources.displayMetrics.density).toInt()

    private fun matchParams(bottomMargin: Int = 0): LinearLayout.LayoutParams =
        LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT)
            .apply { this.bottomMargin = bottomMargin }

    companion object {
        private const val REQUEST_FOLDER = 1001
        private const val REQUEST_ISO = 1002
    }
}
