package com.sonicgen.recomp

import android.app.Activity
import android.os.Bundle
import android.view.Gravity
import android.view.ViewGroup
import android.widget.Button
import android.widget.FrameLayout
import android.widget.LinearLayout
import android.widget.SeekBar
import android.widget.TextView
import android.widget.Toast

/**
 * Full-screen touch layout editor. The same TouchOverlayView as in the
 * game, in EDITOR mode, over a placeholder backdrop: drag controls to
 * move them, use the yellow handle to resize, adjust global opacity and
 * size with the sliders. Layout is saved to touch_layout.json and is
 * picked up by GameActivity unchanged.
 */
class TouchEditorActivity : Activity() {

    private lateinit var editor: TouchOverlayView
    private lateinit var settings: Settings
    private var controls: MutableList<Control> = mutableListOf()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        settings = Settings.load(this)
        controls = TouchLayout.load(this)

        val frame = FrameLayout(this)
        // Placeholder "game screen" backdrop.
        frame.addView(TextView(this).apply {
            text = "ИГРОВОЙ ЭКРАН"
            textSize = 30f
            gravity = Gravity.CENTER
            setBackgroundColor(0xFF1B2A3A.toInt())
            setTextColor(0xFF3D5A76.toInt())
        }, FrameLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))

        editor = TouchOverlayView(this, TouchOverlayView.Mode.EDITOR)
        editor.loadControls(controls)
        editor.opacity = settings.touchOpacity
        editor.globalScale = settings.touchScale
        editor.onLayoutChanged = { /* persisted on Save */ }
        frame.addView(editor, FrameLayout.LayoutParams(
            ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT))

        val toolbar = LinearLayout(this).apply {
            orientation = LinearLayout.HORIZONTAL
            gravity = Gravity.CENTER_VERTICAL
            setBackgroundColor(0xDD101418.toInt())
            setPadding(dp(10), dp(6), dp(10), dp(6))
        }

        toolbar.addView(TextView(this).apply {
            text = "Непрозр."
            setTextColor(0xFFFFFFFF.toInt())
        })
        toolbar.addView(SeekBar(this).apply {
            min = 15
            max = 100
            progress = (settings.touchOpacity * 100).toInt()
            layoutParams = LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f)
            setOnSeekBarChangeListener(sliderListener { value ->
                editor.opacity = value / 100f
            })
        })
        toolbar.addView(TextView(this).apply {
            text = "Размер"
            setTextColor(0xFFFFFFFF.toInt())
        })
        toolbar.addView(SeekBar(this).apply {
            min = 60
            max = 180
            progress = (settings.touchScale * 100).toInt()
            layoutParams = LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f)
            setOnSeekBarChangeListener(sliderListener { value ->
                editor.globalScale = value / 100f
            })
        })
        toolbar.addView(Button(this).apply {
            text = "Сброс"
            setOnClickListener {
                controls = TouchLayout.defaults()
                editor.loadControls(controls)
            }
        })
        toolbar.addView(Button(this).apply {
            text = "Сохранить"
            setOnClickListener { saveAndFinish() }
        })

        val toolbarParams = FrameLayout.LayoutParams(
            ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT, Gravity.BOTTOM)
        frame.addView(toolbar, toolbarParams)

        setContentView(frame)
    }

    private fun saveAndFinish() {
        TouchLayout.save(this, controls)
        settings.touchControls = true
        settings.touchOpacity = editor.opacity
        settings.touchScale = editor.globalScale
        settings.save(this)
        Toast.makeText(this, "Раскладка сохранена", Toast.LENGTH_SHORT).show()
        finish()
    }

    private fun sliderListener(onChange: (Int) -> Unit): SeekBar.OnSeekBarChangeListener =
        object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) = onChange(progress)
            override fun onStartTrackingTouch(seekBar: SeekBar?) = Unit
            override fun onStopTrackingTouch(seekBar: SeekBar?) = Unit
        }

    private fun dp(value: Int): Int = (value * resources.displayMetrics.density).toInt()
}
