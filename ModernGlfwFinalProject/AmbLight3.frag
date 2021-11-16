#version 330 core 
out vec4 fragText;

in vec2 mytex;
uniform sampler2D Texture11;
uniform sampler2D Texture22;



in vec3 vertexcolor;

void main()  //5 must add paranthesis
{
fragText =vec4(vertexcolor,1.0);



} 