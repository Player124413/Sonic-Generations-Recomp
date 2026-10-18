package com.sonicgen.recomp

import android.os.Bundle
import android.view.View
import android.view.WindowManager
import android.widget.FrameLayout
import org.libsdl.app.SDLActivity

/**
 * The game itself. SDLActivity owns the Vulkan surface, audio and the
 * native main loop (libmain.so); this subclass adds the editable touch
 * overlay on top and forwards the launcher's settings to the native side.
 */
class GameActivity : SDLActivity() {

    private var overlay: TouchOverlayView? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)
        hideSystemUi()

        val settings = Settings.load(this)
        NativeBridge.setTouchEnabled(settings.touchControls)
        if (settings.touchControls) {
            val view = TouchOverlayView(this, TouchOverlayView.Mode.GAME)
            view.loadControls(TouchLayout.load(this))
            view.opacity = settings.touchOpacity
            view.globalScale = settings.touchScale
            overlay = view
            addContentView(
                view,
                FrameLayout.LayoutParams(
                    FrameLayout.LayoutParams.MATCH_PARENT,
                    FrameLayout.LayoutParams.MATCH_PARENT
                )
            )
        }
    }

    override fun onPause() {
        overlay?.releaseAll()
        NativeBridge.clearTouch()
        super.onPause()
    }

    override fun onWindowFocusChanged(hasFocus: Boolean) {
        super.onWindowFocusChanged(hasFocus)
        if (hasFocus) hideSystemUi()
    }

    @Suppress("DEPRECATION")
    private fun hideSystemUi() {
        window.decorView.systemUiVisibility = (
            View.SYSTEM_UI_FLAG_FULLSCREEN
                or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                or View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                or View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                or View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                or View.SYSTEM_UI_FLAG_LAYOUT_STABLE
            )
    }
}
