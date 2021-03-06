#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 Tnormal; 
layout (location=2) in vec2 texcor; 
out vec3 normal;
out vec3 fragPosition;
out vec2 mytex;


uniform mat4 model3;
uniform mat4 view3;

void main() 
{ 
fragPosition =vec3(model3*vec4(position,1.0));
normal=Tnormal;
mytex=texcor;
gl_Position = model3*view3*vec4(position,1.0);	
} 