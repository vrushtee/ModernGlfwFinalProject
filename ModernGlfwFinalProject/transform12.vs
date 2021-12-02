//#version 330 core 
//layout (location=0) in vec3 position; 
//
//uniform mat4 model;
//uniform mat4 view;
//uniform mat4 projection;
//
//void main()  
//{ 
//gl_Position = model*view*projection*vec4(position,1.0);
//} 

#version 330 core 
layout (location=0) in vec3 position; 



uniform mat4 model3;
uniform mat4 view3;

void main() 
{ 
;
gl_Position = model3*view3*vec4(position,1.0);	

} 