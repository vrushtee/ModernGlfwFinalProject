#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 
layout (location=2) in vec3 normalCord; 

out vec3 vertexcolor;

uniform mat4 model3;
uniform mat4 view3;

void main()  // 4 must add paranthesis
{ 

vertexcolor= colorpos;
gl_Position = model3*view3*vec4(position,1.0);	

} 