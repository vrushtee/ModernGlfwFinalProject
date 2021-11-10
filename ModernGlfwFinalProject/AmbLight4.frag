#version 330 core 
out vec4 color; 

uniform vec3 objcolor;
uniform vec3 lgtcolor;

in vec3 vertexcolor;

void main()  //5 must add paranthesis
{
color =vec4(objcolor*lgtcolor,1.0);
} 