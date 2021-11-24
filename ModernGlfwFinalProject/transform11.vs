#version 330 core 
layout (location=0) in vec3 position; 
//layout (location=1) in vec3 colorpos; 
//layout (location=2) in vec2 texcor;
layout (location=3) in vec3 normalData;


//out vec3 vertexcolor;
//out vec2 mytex;

out vec3 normal;
out vec3 fragPosi;

//uniform mat4 transform;

uniform mat4 projection;
uniform mat4 model;
uniform mat4 view;
uniform mat4 transform;
uniform mat4 rotate;



void main()  // 4 must add paranthesis
{

//vertexcolor= colorpos;

fragPosi = vec3(model*vec4(position,1.0));

//normal 
normal = normalData;

//mytex=vec2(texcor.x, texcor.y);


gl_Position = projection*model*view*rotate*vec4(position,1.0);
} 

