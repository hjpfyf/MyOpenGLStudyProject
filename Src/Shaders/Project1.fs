#version 330 core

in vec3 fColor;
in vec2 fTex;
uniform sampler2D fTexture1;
uniform sampler2D fTexture2;
uniform float factor;

out vec4 FragColor;

void main()
{
   //FragColor = vec4(pos, 1.0f);
   //FragColor = texture(fTexture2, fTex);
   //FragColor = texture(fTexture, fTex) * vec4(fColor, 1.0f);
   //vec2 change_tex = vec2(1.0 - fTex.x, fTex.y);
   float f = clamp(factor, 0.0f, 1.0f);
   FragColor = mix(texture(fTexture1, fTex), texture(fTexture2, fTex), f);
   //vec4 color = texture(fTexture2, fTex);
   //FragColor = vec4(color.a, color.a, color.a, 1.0f);
}