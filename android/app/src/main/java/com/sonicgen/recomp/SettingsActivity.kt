package com.sonicgen.recomp

import android.app.Activity
import android.os.Bundle
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.LinearLayout
import android.widget.ScrollView
import android.widget.SeekBar
import android.widget.Spinner
import android.widget.Switch
import android.widget.TextView
import android.widget.Toast

/**
 * Settings screen. Every control writes config.toml ([Video]/[Audio]/
 * [Input]/[Touch]/[Game]) - the file the native runtime loads at startup.
 */
class SettingsActivity : Activity() {

    private lateinit var settings: Settings

    private lateinit var renderSpinner: Spinner
    private lateinit var textureSpinner: Spinner
    private lateinit var presetSpinner: Spinner
    private lateinit var scaleSeek: SeekBar
    private lateinit var scaleLabel: TextView
    private lateinit var fpsSeek: SeekBar
    private lateinit var fpsLabel: TextView
    private lateinit var volumeSeek: SeekBar
    private lateinit var touchSwitch: Switch
    private lateinit var opacitySeek: SeekBar
    private lateinit var opacityLabel: TextView
    private lateinit var touchScaleSeek: SeekBar
    private lateinit var touchScaleLabel: TextView
    private lateinit var vibrationSwitch: Switch

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        settings = Settings.load(this)

        val root = LinearLayout(this).apply {
            orientation = LinearLayout.VERTICAL
            setPadding(dp(20), dp(20), dp(20), dp(20))
        }
        setContentView(ScrollView(this).apply { addView(root) })

        root.addView(header("Рендер"))
        renderSpinner = spinner(
            root, "Режим рендера",
            listOf("Нативный Vulkan (по умолчанию)", "Эталонный reference (для сравнений)", "Выключен (null, только логика)"),
            settings.renderMode
        )
        textureSpinner = spinner(
            root, "Сжатие текстур",
            listOf("Авто — ETC2, если поддерживает GPU", "ETC2 принудительно (экономия памяти ×8)", "Выключено — RGBA8"),
            settings.textureCompression
        )
        presetSpinner = spinner(
            root, "Пресет качества",
            listOf("Производительность", "Сбалансированный", "Качество"),
            settings.qualityPreset
        ) { preset -> applyPresetToUi(preset) }

        scaleLabel = label(root, "")
        scaleSeek = seek(root, 50, 100, (settings.renderScale * 100).toInt()) { value ->
            scaleLabel.text = "Масштаб рендера: $value%"
        }
        scaleLabel.text = "Масштаб рендера: ${(settings.renderScale * 100).toInt()}%"

        fpsLabel = label(root, "")
        fpsSeek = seek(root, 30, 120, settings.fpsLimit) { value ->
            fpsLabel.text = "Лимит FPS: $value"
        }
        fpsLabel.text = "Лимит FPS: ${settings.fpsLimit}"

        root.addView(header("Звук и вибрация"))
        label(root, "Громкость")
        volumeSeek = seek(root, 0, 100, (settings.masterVolume * 100).toInt()) { }
        vibrationSwitch = switch(root, "Вибрация геймпада", settings.vibration)

        root.addView(header("Сенсорное управление"))
        touchSwitch = switch(root, "Виртуальный геймпад поверх игры", settings.touchControls)
        opacityLabel = label(root, "")
        opacitySeek = seek(root, 15, 100, (settings.touchOpacity * 100).toInt()) { value ->
            opacityLabel.text = "Прозрачность кнопок: $value%"
        }
        opacityLabel.text = "Прозрачность кнопок: ${(settings.touchOpacity * 100).toInt()}%"
        touchScaleLabel = label(root, "")
        touchScaleSeek = seek(root, 60, 180, (settings.touchScale * 100).toInt()) { value ->
            touchScaleLabel.text = "Размер кнопок: $value%"
        }
        touchScaleLabel.text = "Размер кнопок: ${(settings.touchScale * 100).toInt()}%"

        root.addView(Button(this).apply {
            text = "Сохранить"
            setOnClickListener { saveAndFinish() }
        }, matchParams(topMargin = dp(16)))
        root.addView(Button(this).apply {
            text = "Сбросить раскладку кнопок"
            setOnClickListener {
                TouchLayout.reset(this@SettingsActivity)
                Toast.makeText(this@SettingsActivity, "Раскладка сброшена", Toast.LENGTH_SHORT).show()
            }
        }, matchParams(topMargin = dp(8)))
    }

    private fun applyPresetToUi(preset: Int) {
        // Mirror Settings.applyPreset so the concrete controls follow.
        val scale = when (preset) {
            Settings.PRESET_PERFORMANCE -> 66
            Settings.PRESET_BALANCED -> 85
            else -> 100
        }
        scaleSeek.progress = scale
        textureSpinner.setSelection(
            if (preset == Settings.PRESET_PERFORMANCE) Settings.TEX_ETC2 else Settings.TEX_AUTO
        )
    }

    private fun saveAndFinish() {
        settings.renderMode = renderSpinner.selectedItemPosition
        settings.textureCompression = textureSpinner.selectedItemPosition
        settings.qualityPreset = presetSpinner.selectedItemPosition
        settings.renderScale = scaleSeek.progress / 100f
        settings.fpsLimit = fpsSeek.progress
        settings.masterVolume = volumeSeek.progress / 100f
        settings.vibration = vibrationSwitch.isChecked
        settings.touchControls = touchSwitch.isChecked
        settings.touchOpacity = opacitySeek.progress / 100f
        settings.touchScale = touchScaleSeek.progress / 100f
        settings.save(this)
        Toast.makeText(this, "Настройки сохранены", Toast.LENGTH_SHORT).show()
        finish()
    }

    override fun onPause() {
        // Leaving via Back keeps the edits too.
        settings.renderMode = renderSpinner.selectedItemPosition
        settings.textureCompression = textureSpinner.selectedItemPosition
        settings.qualityPreset = presetSpinner.selectedItemPosition
        settings.renderScale = scaleSeek.progress / 100f
        settings.fpsLimit = fpsSeek.progress
        settings.masterVolume = volumeSeek.progress / 100f
        settings.vibration = vibrationSwitch.isChecked
        settings.touchControls = touchSwitch.isChecked
        settings.touchOpacity = opacitySeek.progress / 100f
        settings.touchScale = touchScaleSeek.progress / 100f
        settings.save(this)
        super.onPause()
    }

    private fun header(text: String): TextView = TextView(this).apply {
        this.text = text
        textSize = 18f
        setPadding(0, dp(14), 0, dp(6))
    }

    private fun label(parent: LinearLayout, text: String): TextView {
        val view = TextView(this).apply {
            this.text = text
            textSize = 14f
            setPadding(0, dp(8), 0, 0)
        }
        parent.addView(view)
        return view
    }

    private fun spinner(
        parent: LinearLayout,
        title: String,
        items: List<String>,
        selection: Int,
        onSelected: ((Int) -> Unit)? = null
    ): Spinner {
        label(parent, title)
        val spinner = Spinner(this).apply {
            adapter = ArrayAdapter(this@SettingsActivity, android.R.layout.simple_spinner_dropdown_item, items)
            setSelection(selection.coerceIn(0, items.size - 1))
        }
        if (onSelected != null) {
            spinner.onItemSelectedListener = object : android.widget.AdapterView.OnItemSelectedListener {
                override fun onItemSelected(parentView: android.widget.AdapterView<*>?, view: android.view.View?, position: Int, id: Long) {
                    onSelected(position)
                }
                override fun onNothingSelected(parentView: android.widget.AdapterView<*>?) = Unit
            }
        }
        parent.addView(spinner, matchParams())
        return spinner
    }

    private fun seek(parent: LinearLayout, min: Int, maxValue: Int, value: Int, onChange: (Int) -> Unit): SeekBar {
        val seek = SeekBar(this).apply {
            this.min = min
            this.max = maxValue
            progress = value.coerceIn(min, maxValue)
            setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
                override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) = onChange(progress)
                override fun onStartTrackingTouch(seekBar: SeekBar?) = Unit
                override fun onStopTrackingTouch(seekBar: SeekBar?) = Unit
            })
        }
        parent.addView(seek, matchParams())
        return seek
    }

    private fun switch(parent: LinearLayout, title: String, checked: Boolean): Switch {
        val view = Switch(this).apply {
            text = title
            isChecked = checked
            textSize = 15f
            setPadding(0, dp(8), 0, dp(8))
        }
        parent.addView(view, matchParams())
        return view
    }

    private fun dp(value: Int): Int = (value * resources.displayMetrics.density).toInt()

    private fun matchParams(topMargin: Int = 0, bottomMargin: Int = 0): LinearLayout.LayoutParams =
        LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT)
            .apply {
                this.topMargin = topMargin
                this.bottomMargin = bottomMargin
            }
}
