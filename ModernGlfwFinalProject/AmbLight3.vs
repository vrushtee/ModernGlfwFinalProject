#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 
layout (location=2) in vec2 texcor; 

out vec3 vertexcolor;
out vec2 mytex;

uniform mat4 model1;

void main()  // 4 must add paranthesis
{ 
vertexcolor= colorpos;

gl_Position = model1*vec4(position,1.0);	
mytex=vec2(texcor.x, texcor.y);



} 