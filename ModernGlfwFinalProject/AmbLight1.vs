#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 
layout (location=2) in vec2 texcor; 

out vec3 vertexcolor;
//out vec3 mycolor;
out vec2 mytex;

//uniform mat4 transform;

//uniform mat4 projection;
uniform mat4 model1;
//uniform mat4 view;


void main()  // 4 must add paranthesis
{ 
vertexcolor= colorpos;
//gl_Position = vec4(position,1.0);

//gl_Position = projection*model*view*vec4(position,1.0); //original


//34 Hw: 
//- [1]  The present last last output of cube make it interactive, first by keys it should scale,second by key make rotation, third by keys make translation, fourth combine all with different keys
	gl_Position = model1*vec4(position,1.0);	//1A translate 
	//gl_Position = projection*vec4(position,1.0); //1B Scale
	//gl_Position = view*vec4(position,1.0); //1C Rotation

mytex=vec2(texcor.x, texcor.y);



} 