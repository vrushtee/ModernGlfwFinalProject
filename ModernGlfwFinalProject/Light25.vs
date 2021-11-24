#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 
layout (location=2) in vec2 texcor; 
layout (location=3) in vec3 Tnormal; 
out vec3 normal;
out vec3 fragPosition;
out vec3 vertexcolor;

out vec2 mytex;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform mat4 rotate;

void main() 
{ 
fragPosition =vec3(model*vec4(position,1.0));
normal=Tnormal;
vertexcolor= colorpos;
gl_Position = model*view*rotate*projection*vec4(position,1.0); //original
mytex=vec2(texcor.x, texcor.y);

//fragPosition =vec3(model3*vec4(position,1.0));
//normal=Tnormal;
//gl_Position = model3*view3*vec4(position,1.0);	

} 