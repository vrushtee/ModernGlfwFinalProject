#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 Tnormal; 
layout (location=2) in vec2 texcor; 
out vec3 normal;
out vec3 fragPosition;
out vec2 mytex;

uniform mat4 projection;
uniform mat4 model;
uniform mat4 view;
uniform mat4 view1;

void main() 
{ 
fragPosition =vec3(model*vec4(position,1.0));
normal=Tnormal;
mytex=texcor;
gl_Position = projection*model*view*view1*vec4(position,1.0);	
} 




//gl_Position = projection*model*view*view1*vec4(position,1.0); //original