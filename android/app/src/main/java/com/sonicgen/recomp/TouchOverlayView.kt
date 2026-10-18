package com.sonicgen.recomp

import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.graphics.RectF
import android.view.MotionEvent
import android.view.View
import kotlin.math.abs
import kotlin.math.hypot
import kotlin.math.max
import kotlin.math.min

/**
 * The virtual gamepad. One view, two modes:
 *  - GAME: transparent overlay above the SDL surface. Touches inside a
 *    control are translated to XAMINPUT state through NativeBridge;
 *    touches elsewhere fall through to SDL (menus, touch look).
 *  - EDITOR: same rendering plus selection, drag-to-move and a resize
 *    handle. Layout changes are reported via [onLayoutChanged]; the
 *    editor activity persists them with TouchLayout.save.
 *
 * Control geometry comes from TouchLayout (relative coordinates), so the
 * same layout works in any resolution and aspect ratio.
 */
class TouchOverlayView(context: Context, private val mode: Mode) : View(context) {

    enum class Mode { GAME, EDITOR }

    var controls: List<Control> = emptyList()
    var opacity: Float = 0.65f
        set(value) {
            field = value.coerceIn(0.05f, 1f)
            invalidate()
        }
    var globalScale: Float = 1.0f
        set(value) {
            field = value.coerceIn(0.4f, 2f)
            invalidate()
        }
    var snapToGrid: Boolean = true
    var onLayoutChanged: (() -> Unit)? = null

    private val fillPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }
    private val strokePaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        style = Paint.Style.STROKE
        strokeWidth = 2f
        color = Color.WHITE
    }
    private val textPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = Color.WHITE
        textAlign = Paint.Align.CENTER
        typeface = android.graphics.Typeface.DEFAULT_BOLD
    }
    private val knobPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply { style = Paint.Style.FILL }

    // Runtime input state (GAME mode).
    private var pressedMask = 0
    private val pointerControl = HashMap<Int, String>()
    private val controlBits = HashMap<String, Int>()
    private val stickOffset = HashMap<String, Pair<Float, Float>>() // id -> knob offset px
    private val activeTriggers = HashSet<String>()

    // Editor state.
    private var selectedId: String? = null
    private var dragPointerId = -1
    private var dragMode = DragMode.NONE
    private var dragOffsetX = 0f
    private var dragOffsetY = 0f

    private enum class DragMode { NONE, MOVE, RESIZE }

    fun loadControls(newControls: List<Control>) {
        controls = newControls
        invalidate()
    }

    // ------------------------------------------------------------------ geom
    private fun shortSide(): Float = min(width, height).toFloat()
    private fun centerX(control: Control): Float = control.cx * width
    private fun centerY(control: Control): Float = control.cy * height
    private fun radius(control: Control): Float = control.size * shortSide() * 0.5f * globalScale

    private fun hitControl(x: Float, y: Float): Control? {
        // Topmost (last drawn) wins on overlaps.
        for (i in controls.indices.reversed()) {
            val control = controls[i]
            val r = radius(control) * 1.15f
            if (hypot(x - centerX(control), y - centerY(control)) <= r) return control
        }
        return null
    }

    // --------------------------------------------------------------- drawing
    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)
        val alphaBase = (opacity * 255).toInt()
        for (control in controls) {
            val cx = centerX(control)
            val cy = centerY(control)
            val r = radius(control)
            val pressed = controlBits.containsKey(control.id) || activeTriggers.contains(control.id) ||
                stickOffset.containsKey(control.id)
            val baseAlpha = if (pressed) min(255, alphaBase + 60) else alphaBase

            when (control.kind) {
                ControlKind.STICK -> {
                    fillPaint.color = Color.argb(baseAlpha / 2, 30, 34, 40)
                    canvas.drawCircle(cx, cy, r, fillPaint)
                    strokePaint.alpha = baseAlpha
                    canvas.drawCircle(cx, cy, r, strokePaint)
                    val offset = stickOffset[control.id]
                    val kx = cx + (offset?.first ?: 0f)
                    val ky = cy + (offset?.second ?: 0f)
                    knobPaint.color = Color.argb(baseAlpha, 70, 80, 95)
                    canvas.drawCircle(kx, ky, r * 0.45f, knobPaint)
                    strokePaint.alpha = baseAlpha
                    canvas.drawCircle(kx, ky, r * 0.45f, strokePaint)
                }
                ControlKind.DPAD -> {
                    fillPaint.color = Color.argb(baseAlpha / 2, 30, 34, 40)
                    val w = r * 0.62f
                    canvas.drawRoundRect(RectF(cx - r, cy - w, cx + r, cy + w), 8f, 8f, fillPaint)
                    canvas.drawRoundRect(RectF(cx - w, cy - r, cx + w, cy + r), 8f, 8f, fillPaint)
                    strokePaint.alpha = baseAlpha
                    canvas.drawRoundRect(RectF(cx - r, cy - w, cx + r, cy + w), 8f, 8f, strokePaint)
                    canvas.drawRoundRect(RectF(cx - w, cy - r, cx + w, cy + r), 8f, 8f, strokePaint)
                    drawLabel(canvas, "✚", cx, cy, r * 0.8f, baseAlpha)
                }
                ControlKind.BUTTON, ControlKind.TRIGGER -> {
                    val accent = accentColor(control.label)
                    fillPaint.color = Color.argb(baseAlpha / 2, Color.red(accent), Color.green(accent), Color.blue(accent))
                    if (control.kind == ControlKind.TRIGGER || control.label == "LB" || control.label == "RB") {
                        val rect = RectF(cx - r * 1.25f, cy - r * 0.62f, cx + r * 1.25f, cy + r * 0.62f)
                        canvas.drawRoundRect(rect, r * 0.3f, r * 0.3f, fillPaint)
                        strokePaint.alpha = baseAlpha
                        canvas.drawRoundRect(rect, r * 0.3f, r * 0.3f, strokePaint)
                    } else {
                        canvas.drawCircle(cx, cy, r, fillPaint)
                        strokePaint.alpha = baseAlpha
                        canvas.drawCircle(cx, cy, r, strokePaint)
                    }
                    drawLabel(canvas, control.label, cx, cy, r * 0.75f, baseAlpha)
                }
            }

            if (mode == Mode.EDITOR && control.id == selectedId) {
                strokePaint.color = Color.YELLOW
                strokePaint.alpha = 255
                strokePaint.strokeWidth = 3f
                canvas.drawCircle(cx, cy, r + 6f, strokePaint)
                // Resize handle at the bottom-right of the selection ring.
                val hx = cx + (r + 6f) * 0.7071f
                val hy = cy + (r + 6f) * 0.7071f
                fillPaint.color = Color.YELLOW
                canvas.drawCircle(hx, hy, 14f, fillPaint)
                strokePaint.color = Color.WHITE
                strokePaint.strokeWidth = 2f
            }
        }
        if (mode == Mode.EDITOR) {
            textPaint.color = Color.argb(200, 255, 255, 255)
            textPaint.textSize = 30f
            canvas.drawText("Перетаскивайте кнопки · жёлтая точка — размер", width / 2f, 44f, textPaint)
        }
    }

    private fun drawLabel(canvas: Canvas, label: String, cx: Float, cy: Float, size: Float, alpha: Int) {
        if (label.isEmpty()) return
        textPaint.color = Color.argb(alpha, 255, 255, 255)
        textPaint.textSize = size
        val metrics = textPaint.fontMetrics
        canvas.drawText(label, cx, cy - (metrics.ascent + metrics.descent) / 2f, textPaint)
    }

    private fun accentColor(label: String): Int = when (label) {
        "A" -> Color.rgb(122, 193, 67)
        "B" -> Color.rgb(231, 72, 86)
        "X" -> Color.rgb(45, 125, 222)
        "Y" -> Color.rgb(255, 196, 37)
        else -> Color.rgb(70, 80, 95)
    }

    // ---------------------------------------------------------------- input
    override fun onTouchEvent(event: MotionEvent): Boolean {
        return if (mode == Mode.EDITOR) handleEditorTouch(event) else handleGameTouch(event)
    }

    private fun handleGameTouch(event: MotionEvent): Boolean {
        when (event.actionMasked) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                val index = event.actionIndex
                val control = hitControl(event.getX(index), event.getY(index)) ?: return false
                pointerControl[event.getPointerId(index)] = control.id
                pressControl(control, event.getX(index), event.getY(index))
            }
            MotionEvent.ACTION_MOVE -> {
                for (i in 0 until event.pointerCount) {
                    val id = pointerControl[event.getPointerId(i)] ?: continue
                    val control = controls.firstOrNull { it.id == id } ?: continue
                    moveControl(control, event.getX(i), event.getY(i))
                }
            }
            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP, MotionEvent.ACTION_CANCEL -> {
                val pointerId = event.getPointerId(event.actionIndex)
                val id = pointerControl.remove(pointerId) ?: return pointerControl.isNotEmpty()
                val control = controls.firstOrNull { it.id == id } ?: return true
                releaseControl(control)
            }
        }
        return pointerControl.isNotEmpty()
    }

    private fun pressControl(control: Control, x: Float, y: Float) {
        when (control.kind) {
            ControlKind.BUTTON -> setControlBit(control, control.button, true)
            ControlKind.TRIGGER -> {
                activeTriggers += control.id
                NativeBridge.setTrigger(control.id == "RT", 1f)
            }
            ControlKind.STICK -> moveControl(control, x, y)
            ControlKind.DPAD -> moveControl(control, x, y)
        }
        invalidate()
    }

    private fun moveControl(control: Control, x: Float, y: Float) {
        val cx = centerX(control)
        val cy = centerY(control)
        val r = radius(control)
        var dx = x - cx
        var dy = y - cy
        when (control.kind) {
            ControlKind.STICK -> {
                val length = hypot(dx, dy)
                val maxTravel = r * 0.62f
                if (length > maxTravel && length > 0f) {
                    dx = dx / length * maxTravel
                    dy = dy / length * maxTravel
                }
                stickOffset[control.id] = dx to dy
                // Game Y axis points up, screen Y points down.
                val nx = (dx / maxTravel).coerceIn(-1f, 1f)
                val ny = (-dy / maxTravel).coerceIn(-1f, 1f)
                NativeBridge.setStick(control.id == "RS", nx, ny)
            }
            ControlKind.DPAD -> {
                val dead = r * 0.28f
                var bits = 0
                if (abs(dx) > dead || abs(dy) > dead) {
                    bits = if (abs(dx) > abs(dy)) {
                        if (dx > 0) NativeBridge.DPAD_RIGHT else NativeBridge.DPAD_LEFT
                    } else {
                        if (dy > 0) NativeBridge.DPAD_DOWN else NativeBridge.DPAD_UP
                    }
                }
                setControlBits(control, bits)
            }
            else -> Unit
        }
        invalidate()
    }

    private fun releaseControl(control: Control) {
        when (control.kind) {
            ControlKind.BUTTON -> setControlBit(control, control.button, false)
            ControlKind.TRIGGER -> {
                activeTriggers -= control.id
                NativeBridge.setTrigger(control.id == "RT", 0f)
            }
            ControlKind.STICK -> {
                stickOffset -= control.id
                NativeBridge.setStick(control.id == "RS", 0f, 0f)
            }
            ControlKind.DPAD -> setControlBits(control, 0)
        }
        invalidate()
    }

    private fun setControlBit(control: Control, bit: Int, pressed: Boolean) {
        if (pressed) controlBits[control.id] = bit else controlBits -= control.id
        publishMask()
    }

    private fun setControlBits(control: Control, bits: Int) {
        if (bits != 0) controlBits[control.id] = bits else controlBits -= control.id
        publishMask()
    }

    private fun publishMask() {
        var mask = 0
        for (bits in controlBits.values) mask = mask or bits
        if (mask != pressedMask) {
            pressedMask = mask
            NativeBridge.setButtons(mask)
        }
    }

    /** Release everything (activity pause, focus loss). */
    fun releaseAll() {
        pointerControl.clear()
        controlBits.clear()
        stickOffset.clear()
        activeTriggers.clear()
        pressedMask = 0
        NativeBridge.clearTouch()
        invalidate()
    }

    // --------------------------------------------------------------- editor
    private fun handleEditorTouch(event: MotionEvent): Boolean {
        val x = event.x
        val y = event.y
        when (event.actionMasked) {
            MotionEvent.ACTION_DOWN -> {
                val selected = controls.firstOrNull { it.id == selectedId }
                if (selected != null) {
                    val r = radius(selected) + 6f
                    val hx = centerX(selected) + r * 0.7071f
                    val hy = centerY(selected) + r * 0.7071f
                    if (hypot(x - hx, y - hy) <= 30f) {
                        dragMode = DragMode.RESIZE
                        dragPointerId = event.getPointerId(0)
                        return true
                    }
                }
                val control = hitControl(x, y)
                if (control != null) {
                    selectedId = control.id
                    dragMode = DragMode.MOVE
                    dragPointerId = event.getPointerId(0)
                    dragOffsetX = centerX(control) - x
                    dragOffsetY = centerY(control) - y
                } else {
                    selectedId = null
                    dragMode = DragMode.NONE
                }
                invalidate()
            }
            MotionEvent.ACTION_MOVE -> {
                val control = controls.firstOrNull { it.id == selectedId } ?: return true
                when (dragMode) {
                    DragMode.MOVE -> {
                        var nx = (x + dragOffsetX) / width
                        var ny = (y + dragOffsetY) / height
                        if (snapToGrid) {
                            nx = (Math.round(nx * 200f) / 200f)
                            ny = (Math.round(ny * 200f) / 200f)
                        }
                        control.cx = nx.coerceIn(0f, 1f)
                        control.cy = ny.coerceIn(0f, 1f)
                        onLayoutChanged?.invoke()
                    }
                    DragMode.RESIZE -> {
                        val distance = hypot(x - centerX(control), y - centerY(control))
                        // Diameter from centre distance, in short-side units.
                        control.size = ((distance * 2f) / shortSide() / globalScale).coerceIn(0.05f, 0.6f)
                        onLayoutChanged?.invoke()
                    }
                    DragMode.NONE -> Unit
                }
                invalidate()
            }
            MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                dragMode = DragMode.NONE
                dragPointerId = -1
            }
        }
        return true
    }

    fun selectedControl(): Control? = controls.firstOrNull { it.id == selectedId }

    fun deleteSelected() {
        val id = selectedId ?: return
        controls = controls.filter { it.id != id }
        selectedId = null
        onLayoutChanged?.invoke()
        invalidate()
    }

    override fun onDetachedFromWindow() {
        if (mode == Mode.GAME) releaseAll()
        super.onDetachedFromWindow()
    }
}
