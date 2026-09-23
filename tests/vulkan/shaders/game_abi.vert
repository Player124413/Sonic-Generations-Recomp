#version 460
#extension GL_EXT_buffer_reference : require
layout(buffer_reference, std430, buffer_reference_align=16) readonly buffer Constants { vec4 values[]; };
layout(buffer_reference, std430, buffer_reference_align=4) readonly buffer Shared { uint words[]; };
layout(push_constant) uniform Addresses { Constants vertex; Constants pixel; Shared shared; } addresses;
layout(location=0) in vec2 position;
layout(location=0) out vec2 uv;
void main() {
    gl_Position=vec4(position+addresses.vertex.values[0].xy,0.5,1);
    uv=position*0.5+0.5;
}
