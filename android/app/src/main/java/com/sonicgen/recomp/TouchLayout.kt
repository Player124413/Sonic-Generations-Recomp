package com.sonicgen.recomp

import android.content.Context
import org.json.JSONArray
import org.json.JSONObject

enum class ControlKind { STICK, DPAD, BUTTON, TRIGGER }

/**
 * One on-screen control. Position (cx, cy) is the centre in relative screen
 * coordinates; size is the diameter as a fraction of the short screen side.
 * Relative coordinates survive rotation and resolution changes unchanged.
 */
data class Control(
    val id: String,
    val kind: ControlKind,
    val label: String,
    val button: Int,
    var cx: Float,
    var cy: Float,
    var size: Float
)

object TouchLayout {
    fun defaults(): MutableList<Control> = mutableListOf(
        // Left hand: stick (primary movement) + D-Pad above it.
        Control("LS", ControlKind.STICK, "", 0, 0.14f, 0.68f, 0.36f),
        Control("DPAD", ControlKind.DPAD, "", 0, 0.14f, 0.30f, 0.27f),
        Control("L3", ControlKind.BUTTON, "L3", NativeBridge.LEFT_THUMB, 0.28f, 0.88f, 0.10f),
        // Right hand: camera stick + ABXY diamond.
        Control("RS", ControlKind.STICK, "", 0, 0.70f, 0.72f, 0.32f),
        Control("Y", ControlKind.BUTTON, "Y", NativeBridge.Y, 0.885f, 0.38f, 0.13f),
        Control("X", ControlKind.BUTTON, "X", NativeBridge.X, 0.815f, 0.52f, 0.13f),
        Control("B", ControlKind.BUTTON, "B", NativeBridge.B, 0.955f, 0.52f, 0.13f),
        Control("A", ControlKind.BUTTON, "A", NativeBridge.A, 0.885f, 0.66f, 0.13f),
        Control("R3", ControlKind.BUTTON, "R3", NativeBridge.RIGHT_THUMB, 0.56f, 0.88f, 0.10f),
        // Shoulders and triggers along the top edge.
        Control("LT", ControlKind.TRIGGER, "LT", 0, 0.10f, 0.09f, 0.15f),
        Control("LB", ControlKind.BUTTON, "LB", NativeBridge.LEFT_SHOULDER, 0.10f, 0.22f, 0.14f),
        Control("RT", ControlKind.TRIGGER, "RT", 0, 0.90f, 0.09f, 0.15f),
        Control("RB", ControlKind.BUTTON, "RB", NativeBridge.RIGHT_SHOULDER, 0.90f, 0.22f, 0.14f),
        // System buttons, small and out of the way.
        Control("BACK", ControlKind.BUTTON, "≡", NativeBridge.BACK, 0.44f, 0.09f, 0.10f),
        Control("START", ControlKind.BUTTON, "▶", NativeBridge.START, 0.56f, 0.09f, 0.10f)
    )

    fun load(context: Context): MutableList<Control> {
        val file = AppFiles.layoutFile(context)
        if (!file.isFile) return defaults()
        return try {
            val root = JSONObject(file.readText())
            val array = root.getJSONArray("controls")
            val result = mutableListOf<Control>()
            for (i in 0 until array.length()) {
                val item = array.getJSONObject(i)
                val kind = ControlKind.valueOf(item.getString("kind"))
                result += Control(
                    id = item.getString("id"),
                    kind = kind,
                    label = item.optString("label"),
                    button = item.optInt("button"),
                    cx = item.getDouble("cx").toFloat(),
                    cy = item.getDouble("cy").toFloat(),
                    size = item.getDouble("size").toFloat()
                )
            }
            if (result.isEmpty()) defaults() else result
        } catch (_: Exception) {
            defaults()
        }
    }

    fun save(context: Context, controls: List<Control>) {
        val array = JSONArray()
        for (control in controls) {
            array.put(
                JSONObject()
                    .put("id", control.id)
                    .put("kind", control.kind.name)
                    .put("label", control.label)
                    .put("button", control.button)
                    .put("cx", control.cx.toDouble())
                    .put("cy", control.cy.toDouble())
                    .put("size", control.size.toDouble())
            )
        }
        val root = JSONObject().put("version", 1).put("controls", array)
        AppFiles.layoutFile(context).writeText(root.toString(2))
    }

    fun reset(context: Context) {
        AppFiles.layoutFile(context).delete()
    }
}
