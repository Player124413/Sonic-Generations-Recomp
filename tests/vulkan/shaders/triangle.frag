#version 450
layout(location = 0) in vec4 vertexColor;
layout(location = 0) out vec4 outputColor;
void main() {
    outputColor = vertexColor;
}
