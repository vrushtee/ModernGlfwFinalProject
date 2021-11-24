#version 330 core 

out vec4 fragTemp;
in vec3 vertexcolor;

void main()  //5 must add paranthesis
{
fragTemp =vec4(vertexcolor,1.0);
} 