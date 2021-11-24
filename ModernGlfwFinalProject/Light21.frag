#version 330 core 

out vec4 Kr;

uniform vec3 objcolor;
uniform vec3 lgtcolor;

in vec3 vertexcolor;

void main()  
{
Kr =vec4(objcolor*lgtcolor,1.0);
} 