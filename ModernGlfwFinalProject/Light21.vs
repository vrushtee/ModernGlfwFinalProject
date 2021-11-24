#version 330 core 
layout (location=0) in vec3 position; 

out vec3 vertexcolor;

uniform mat4 model3;
uniform mat4 view3;

void main() 
{ 
gl_Position = model3*view3*vec4(position,1.0);	
} 