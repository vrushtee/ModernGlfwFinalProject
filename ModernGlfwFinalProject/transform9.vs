#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 
layout (location=2) in vec2 texcor; 

out vec3 vertexcolor;
//out vec3 mycolor;
out vec2 mytex;

//uniform mat4 transform;

uniform mat4 projection;
uniform mat4 model;
uniform mat4 view;
uniform mat4 transform;
uniform mat4 rotate;



void main()  // 4 must add paranthesis
{ 
vertexcolor= colorpos;
//gl_Position = vec4(position,1.0);

gl_Position = projection*model*view*rotate*vec4(position,1.0); //original
mytex=vec2(texcor.x, texcor.y);



} 
