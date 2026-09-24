#include <stdafx.h>
#include "xam.h"
#include "xdm.h"
#include <hid/hid.h>
#include <ui/game_window.h>
#include <cpu/guest_thread.h>
#include <ranges>
#include <unordered_set>
#include "xxHashMap.h"
#include <user/config.h>
#include <user/paths.h>
#include <SDL.h>

#include "xam_content_registry.h"

uint32_t XamShowMessageBoxUI(uint32_t dwUserIndex, be<uint16_t>* wszTitle, be<uint16_t>* wszText, uint32_t cButtons,
    xpointer<be<uint16_t>>* pwszButtons, uint32_t dwFocusButton, uint32_t dwFlags, be<uint32_t>* pResult, XXOVERLAPPED* pOverlapped)
{
    *pResult = cButtons ? cButtons - 1 : 0;

#if _DEBUG
    assert("XamShowMessageBoxUI encountered!" && false);
#elif _WIN32
    // This code is Win32-only as it'll most likely crash, misbehave or
    // cause corruption due to using a different type of memory than what
    // wchar_t is on Linux. Windows uses 2 bytes while Linux uses 4 bytes.
    std::vector<std::wstring> texts{};

    texts.emplace_back(reinterpret_cast<wchar_t*>(wszTitle));
    texts.emplace_back(reinterpret_cast<wchar_t*>(wszText));

    for (size_t i = 0; i < cButtons; i++)
        texts.emplace_back(reinterpret_cast<wchar_t*>(pwszButtons[i].get()));

    for (auto& text : texts)
    {
        for (size_t i = 0; i < text.size(); i++)
            ByteSwapInplace(text[i]);
    }

    wprintf(L"[XamShowMessageBoxUI] !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    wprintf(L"[XamShowMessageBoxUI] If you are encountering this message and the game has ceased functioning,\n");
    wprintf(L"[XamShowMessageBoxUI] please create an issue at https://github.com/hedge-dev/UnleashedRecomp/issues.\n");
    wprintf(L"[XamShowMessageBoxUI] !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    wprintf(L"[XamShowMessageBoxUI] %ls\n", texts[0].c_str());
    wprintf(L"[XamShowMessageBoxUI] %ls\n", texts[1].c_str());
    wprintf(L"[XamShowMessageBoxUI] ");

    for (size_t i = 0; i < cButtons; i++)
    {
        wprintf(L"%ls", texts[2 + i].c_str());

        if (i != cButtons - 1)
            wprintf(L" | ");
    }

    wprintf(L"\n");
    wprintf(L"[XamShowMessageBoxUI] Defaulted to button: %d\n", pResult->get());
    wprintf(L"[XamShowMessageBoxUI] !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
#endif

    if (pOverlapped)
    {
        pOverlapped->dwCompletionContext = GuestThread::GetCurrentThreadId();
        pOverlapped->Error = 0;
        pOverlapped->Length = -1;
    }

    XamNotifyEnqueueEvent(9, 0);

    return 0;
}

uint32_t XamContentCreateEx(uint32_t dwUserIndex, const char* szRootName, const XCONTENT_DATA* pContentData,
    uint32_t dwContentFlags, be<uint32_t>* pdwDisposition, be<uint32_t>* pdwLicenseMask,
    uint32_t dwFileCacheSize, uint64_t uliContentSize, PXXOVERLAPPED pOverlapped)
{
    if(!szRootName || !pContentData || pContentData->dwContentType<1 || pContentData->dwContentType>3 ||
       !std::memchr(pContentData->szFileName,0,sizeof(pContentData->szFileName))) return 87;
    std::lock_guard lock(XamContentMutex());
    std::string existingRoot;
    const auto exists=XamFindContentRoot(*pContentData,existingRoot);
    const auto mode = dwContentFlags & 0xF;

    if (mode == CREATE_ALWAYS)
    {
        if (pdwDisposition)
            *pdwDisposition = XCONTENT_NEW;

        if (!exists)
        {
            std::filesystem::path rootPath;

            if (pContentData->dwContentType == XCONTENTTYPE_SAVEDATA)
            {
                rootPath = GetSavePath(true);
            }
            else if (pContentData->dwContentType == XCONTENTTYPE_DLC)
            {
                rootPath = GetGamePath() / "dlc";
            }
            else
            {
                rootPath = GetGamePath();
            }

            const std::string root = (const char*)rootPath.u8string().c_str();
            XamRegisterContent(*pContentData, root);

            std::error_code ec;
            std::filesystem::create_directory(rootPath, ec);

            XamRootCreate(szRootName, root);
        }
        else
        {
            XamRootCreate(szRootName, existingRoot);
        }

        return ERROR_SUCCESS;
    }

    if (mode == OPEN_EXISTING)
    {
        if (exists)
        {
            if (pdwDisposition)
                *pdwDisposition = XCONTENT_EXISTING;

            XamRootCreate(szRootName, existingRoot);

            return ERROR_SUCCESS;
        }
        else
        {
            if (pdwDisposition)
                *pdwDisposition = XCONTENT_NEW;

            return ERROR_PATH_NOT_FOUND;
        }
    }

    return ERROR_PATH_NOT_FOUND;
}

uint32_t XamContentClose(const char* szRootName, XXOVERLAPPED* pOverlapped)
{
    if(!szRootName) return 87;
    XamRootClose(szRootName);
    return 0;
}

uint32_t XamContentGetDeviceData(uint32_t DeviceID, XDEVICE_DATA* pDeviceData)
{
    pDeviceData->DeviceID = DeviceID;
    pDeviceData->DeviceType = XCONTENTDEVICETYPE_HDD;
    pDeviceData->ulDeviceBytes = 0x10000000;
    pDeviceData->ulDeviceFreeBytes = 0x10000000;
    pDeviceData->wszName[0] = 'S';
    pDeviceData->wszName[1] = 'o';
    pDeviceData->wszName[2] = 'n';
    pDeviceData->wszName[3] = 'i';
    pDeviceData->wszName[4] = 'c';
    pDeviceData->wszName[5] = '\0';

    return 0;
}

uint32_t XamInputGetCapabilities(uint32_t unk, uint32_t userIndex, uint32_t flags, XAMINPUT_CAPABILITIES* caps)
{
    uint32_t result = hid::GetCapabilities(userIndex, caps);

    if (result == ERROR_SUCCESS)
    {
        ByteSwapInplace(caps->Flags);
        ByteSwapInplace(caps->Gamepad.wButtons);
        ByteSwapInplace(caps->Gamepad.sThumbLX);
        ByteSwapInplace(caps->Gamepad.sThumbLY);
        ByteSwapInplace(caps->Gamepad.sThumbRX);
        ByteSwapInplace(caps->Gamepad.sThumbRY);
        ByteSwapInplace(caps->Vibration.wLeftMotorSpeed);
        ByteSwapInplace(caps->Vibration.wRightMotorSpeed);
    }

    return result;
}

uint32_t XamInputGetState(uint32_t userIndex, uint32_t flags, XAMINPUT_STATE* state)
{
    memset(state, 0, sizeof(*state));

    if (hid::IsInputAllowed())
        hid::GetState(userIndex, state);

    auto keyboardState = SDL_GetKeyboardState(NULL);

    if (GameWindow::s_isFocused && !keyboardState[SDL_SCANCODE_LALT])
    {
        if (keyboardState[Config::Key_LeftStickUp])
            state->Gamepad.sThumbLY = 32767;
        if (keyboardState[Config::Key_LeftStickDown])
            state->Gamepad.sThumbLY = -32768;
        if (keyboardState[Config::Key_LeftStickLeft])
            state->Gamepad.sThumbLX = -32768;
        if (keyboardState[Config::Key_LeftStickRight])
            state->Gamepad.sThumbLX = 32767;

        if (keyboardState[Config::Key_RightStickUp])
            state->Gamepad.sThumbRY = 32767;
        if (keyboardState[Config::Key_RightStickDown])
            state->Gamepad.sThumbRY = -32768;
        if (keyboardState[Config::Key_RightStickLeft])
            state->Gamepad.sThumbRX = -32768;
        if (keyboardState[Config::Key_RightStickRight])
            state->Gamepad.sThumbRX = 32767;

        if (keyboardState[Config::Key_LeftTrigger])
            state->Gamepad.bLeftTrigger = 0xFF;
        if (keyboardState[Config::Key_RightTrigger])
            state->Gamepad.bRightTrigger = 0xFF;

        if (keyboardState[Config::Key_DPadUp])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_DPAD_UP;
        if (keyboardState[Config::Key_DPadDown])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_DPAD_DOWN;
        if (keyboardState[Config::Key_DPadLeft])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_DPAD_LEFT;
        if (keyboardState[Config::Key_DPadRight])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_DPAD_RIGHT;

        if (keyboardState[Config::Key_Start])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_START;
        if (keyboardState[Config::Key_Back])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_BACK;

        if (keyboardState[Config::Key_LeftBumper])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_LEFT_SHOULDER;
        if (keyboardState[Config::Key_RightBumper])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_RIGHT_SHOULDER;

        if (keyboardState[Config::Key_A])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_A;
        if (keyboardState[Config::Key_B])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_B;
        if (keyboardState[Config::Key_X])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_X;
        if (keyboardState[Config::Key_Y])
            state->Gamepad.wButtons |= XAMINPUT_GAMEPAD_Y;
    }

    state->Gamepad.wButtons &= ~hid::g_prohibitedButtons;

    if (hid::g_isLeftStickProhibited)
    {
        state->Gamepad.sThumbLX = 0;
        state->Gamepad.sThumbLY = 0;
    }

    if (hid::g_isRightStickProhibited)
    {
        state->Gamepad.sThumbRX = 0;
        state->Gamepad.sThumbRY = 0;
    }

    ByteSwapInplace(state->Gamepad.wButtons);
    ByteSwapInplace(state->Gamepad.sThumbLX);
    ByteSwapInplace(state->Gamepad.sThumbLY);
    ByteSwapInplace(state->Gamepad.sThumbRX);
    ByteSwapInplace(state->Gamepad.sThumbRY);

    return ERROR_SUCCESS;
}

uint32_t XamInputSetState(uint32_t userIndex, uint32_t flags, XAMINPUT_VIBRATION* vibration)
{
    if (!hid::IsInputDeviceController() || !Config::Vibration)
        return ERROR_SUCCESS;

    ByteSwapInplace(vibration->wLeftMotorSpeed);
    ByteSwapInplace(vibration->wRightMotorSpeed);

    return hid::SetState(userIndex, vibration);
}
