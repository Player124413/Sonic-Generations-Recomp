package com.sonicgen.recomp

import android.content.Context
import java.io.File

/** Internal-storage layout shared with the native runtime. */
object AppFiles {
    // The native side builds its user path as <internal storage>/assets
    // (SonicGenerationsRecomp/user/paths.cpp), identical to this folder.
    fun assetsDir(context: Context): File = File(context.filesDir, "assets").apply { mkdirs() }
    fun configFile(context: Context): File = File(assetsDir(context), "config.toml")
    fun layoutFile(context: Context): File = File(assetsDir(context), "touch_layout.json")
    fun importDir(context: Context): File = File(context.filesDir, "import").apply { mkdirs() }
    fun pendingInstallFile(context: Context): File = File(assetsDir(context), "pending_install.txt")

    fun isGameInstalled(context: Context): Boolean =
        File(assetsDir(context), "default.xex").isFile

    fun directorySize(file: File): Long {
        if (!file.exists()) return 0
        if (file.isFile) return file.length()
        var total = 0L
        file.walkTopDown().forEach { if (it.isFile) total += it.length() }
        return total
    }
}

/**
 * Minimal TOML subset reader/writer covering the flat `key = value` entries
 * of config.toml. The native Config (user/config.cpp) is the owner of the
 * format; unknown keys are preserved verbatim so the launcher never eats
 * settings written by the game or by hand.
 */
class ConfigToml private constructor(
    private val sections: LinkedHashMap<String, LinkedHashMap<String, String>>
) {
    fun get(section: String, key: String, default: String): String =
        sections[section]?.get(key) ?: default

    fun getInt(section: String, key: String, default: Int): Int =
        get(section, key, default.toString()).trim().toIntOrNull() ?: default

    fun getFloat(section: String, key: String, default: Float): Float =
        get(section, key, default.toString()).trim().toFloatOrNull() ?: default

    fun getBool(section: String, key: String, default: Boolean): Boolean =
        when (get(section, key, default.toString()).trim().lowercase()) {
            "true", "1" -> true
            "false", "0" -> false
            else -> default
        }

    fun set(section: String, key: String, value: String) {
        sections.getOrPut(section) { LinkedHashMap() }[key] = value
    }

    fun set(section: String, key: String, value: Int) = set(section, key, value.toString())
    fun set(section: String, key: String, value: Float) = set(section, key, value.toString())
    fun set(section: String, key: String, value: Boolean) = set(section, key, if (value) "true" else "false")

    fun serialize(): String {
        val out = StringBuilder()
        out.append("# Sonic Generations Recomp configuration.\n")
        out.append("# Written by the Android launcher; the game reads the same file.\n")
        var first = true
        for ((section, entries) in sections) {
            if (!first) out.append('\n')
            first = false
            out.append('[').append(section).append("]\n")
            for ((key, value) in entries) out.append(key).append(" = ").append(value).append('\n')
        }
        return out.toString()
    }

    companion object {
        fun parse(text: String): ConfigToml {
            val sections = LinkedHashMap<String, LinkedHashMap<String, String>>()
            var current = ""
            sections[current] = LinkedHashMap()
            for (rawLine in text.lineSequence()) {
                val line = rawLine.substringBefore('#').trim()
                if (line.isEmpty()) continue
                if (line.startsWith("[") && line.endsWith("]")) {
                    current = line.substring(1, line.length - 1).trim()
                    sections.getOrPut(current) { LinkedHashMap() }
                    continue
                }
                val eq = line.indexOf('=')
                if (eq <= 0) continue
                val key = line.substring(0, eq).trim()
                var value = line.substring(eq + 1).trim()
                if (value.length >= 2 && value.first() == '"' && value.last() == '"')
                    value = value.substring(1, value.length - 1)
                sections.getOrPut(current) { LinkedHashMap() }[key] = value
            }
            if (sections[""]?.isEmpty() == true) sections.remove("")
            return ConfigToml(sections)
        }

        fun load(context: Context): ConfigToml {
            val file = AppFiles.configFile(context)
            return if (file.isFile) parse(file.readText()) else ConfigToml(LinkedHashMap())
        }
    }

    fun save(context: Context) {
        AppFiles.configFile(context).writeText(serialize())
    }
}

/** Typed view over config.toml; defaults mirror user/config.cpp exactly. */
class Settings(private val toml: ConfigToml) {
    // [Video] RenderMode: 0 Native (default), 1 Reference, 2 Null.
    var renderMode: Int by tomlField(toml, "Video", "RenderMode", 0)
    var renderScale: Float by tomlField(toml, "Video", "RenderScale", 1.0f)
    // [Video] TextureCompression: 0 Auto (ETC2), 1 ETC2, 2 Off.
    var textureCompression: Int by tomlField(toml, "Video", "TextureCompression", 0)
    // [Video] QualityPreset: 0 Performance, 1 Balanced, 2 Quality.
    var qualityPreset: Int by tomlField(toml, "Video", "QualityPreset", 1)
    var fpsLimit: Int by tomlField(toml, "Game", "FPSLimit", 60)
    var masterVolume: Float by tomlField(toml, "Audio", "MasterVolume", 1.0f)
    var vibration: Boolean by tomlField(toml, "Input", "Vibration", true)
    var touchControls: Boolean by tomlField(toml, "Touch", "TouchControls", true)
    var touchOpacity: Float by tomlField(toml, "Touch", "TouchOpacity", 0.65f)
    var touchScale: Float by tomlField(toml, "Touch", "TouchScale", 1.0f)

    fun save(context: Context) = toml.save(context)

    /** Quality presets are shortcuts that write the concrete values. */
    fun applyPreset(preset: Int) {
        qualityPreset = preset
        when (preset) {
            PRESET_PERFORMANCE -> {
                renderScale = 0.66f
                textureCompression = TEX_ETC2
            }
            PRESET_BALANCED -> {
                renderScale = 0.85f
                textureCompression = TEX_AUTO
            }
            PRESET_QUALITY -> {
                renderScale = 1.0f
                textureCompression = TEX_AUTO
            }
        }
    }

    companion object {
        const val RENDER_NATIVE = 0
        const val RENDER_REFERENCE = 1
        const val RENDER_NULL = 2

        const val TEX_AUTO = 0
        const val TEX_ETC2 = 1
        const val TEX_OFF = 2

        const val PRESET_PERFORMANCE = 0
        const val PRESET_BALANCED = 1
        const val PRESET_QUALITY = 2

        fun load(context: Context): Settings = Settings(ConfigToml.load(context))
    }
}

// Small delegates so Settings stays a typed view without boilerplate.
private fun tomlField(toml: ConfigToml, section: String, key: String, default: Int) =
    object : kotlin.properties.ReadWriteProperty<Settings, Int> {
        override fun getValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>): Int =
            toml.getInt(section, key, default)
        override fun setValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>, value: Int) =
            toml.set(section, key, value)
    }

private fun tomlField(toml: ConfigToml, section: String, key: String, default: Float) =
    object : kotlin.properties.ReadWriteProperty<Settings, Float> {
        override fun getValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>): Float =
            toml.getFloat(section, key, default)
        override fun setValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>, value: Float) =
            toml.set(section, key, value)
    }

private fun tomlField(toml: ConfigToml, section: String, key: String, default: Boolean) =
    object : kotlin.properties.ReadWriteProperty<Settings, Boolean> {
        override fun getValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>): Boolean =
            toml.getBool(section, key, default)
        override fun setValue(thisRef: Settings, property: kotlin.reflect.KProperty<*>, value: Boolean) =
            toml.set(section, key, value)
    }
