#version 330 core 
out vec4 color; 

in vec4 vertexcolor;

void main()  //5 must add paranthesis
{
color = vertexcolor;
} 

