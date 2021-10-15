#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec4 colorpos; 
layout (location=2) in vec2 texcor; 

//out vec4 vertexcolor;
out vec3 mycolor;
out vec2 mytex;

uniform mat4 transform;

//uniform mat4 model;
//uniform mat4 view;
//uniform mat4 projection;

void main()  // 4 must add paranthesis
{ 
//vertexcolor= colorpos;
//gl_Position = vec4(position,1.0);

mytex=vec2(texcor.x, texcor.y);
gl_Position = transform*vec4(position.x,position.y, position.z,1.0);



} 

