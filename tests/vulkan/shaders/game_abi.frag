#version 460
#extension GL_EXT_buffer_reference : require
#extension GL_EXT_nonuniform_qualifier : require
layout(buffer_reference, std430, buffer_reference_align=16) readonly buffer Constants { vec4 values[]; };
layout(buffer_reference, std430, buffer_reference_align=4) readonly buffer Shared { uint words[]; };
layout(push_constant) uniform Addresses { Constants vertex; Constants pixel; Shared commonData; } addresses;
layout(set=0,binding=0) uniform texture2D textures[];
layout(set=3,binding=0) uniform sampler samplers[];
layout(location=0) in vec2 uv;
layout(location=0) out vec4 color;
void main() {
    color=texture(sampler2D(textures[nonuniformEXT(addresses.commonData.words[0])],samplers[nonuniformEXT(addresses.commonData.words[48])]),uv)*addresses.pixel.values[0];
}
