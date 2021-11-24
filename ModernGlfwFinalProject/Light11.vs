#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 

out vec3 vertexcolor;
out vec3 mycolor;
uniform mat4 model1;

void main()  // 4 must add paranthesis
{ 

gl_Position = model1*vec4(position,1.0);	//1A translate 
vertexcolor= colorpos;
} 