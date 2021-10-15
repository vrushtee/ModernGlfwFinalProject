#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec4 colorpos; 

out vec4 vertexcolor;
uniform mat4 transform1;

void main()  // 4 must add paranthesis
{ 
gl_Position = vec4(position,1.0);

gl_Position = transform1*vec4(position.x,position.y, position.z,1.0);
vertexcolor= colorpos;
} 

 

