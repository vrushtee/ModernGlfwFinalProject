#version 330 core 
layout (location=0) in vec3 position; // 3 must need semicolon
void main()  // 4 must add paranthesis
{ 
gl_Position = vec4(position,1.0);
} 

