#version 400

uniform sampler2D f_texture;

in vec4 color;
in vec2 texel;
out vec4 fColor;

void main() {
	fColor = vec4(0.0f, 1.0f, 0.0f, 1.0f);
}