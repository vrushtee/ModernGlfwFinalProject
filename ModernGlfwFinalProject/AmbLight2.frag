#version 330 core 
//out vec4 color; 
out vec4 fragText;

//in vec4 mycolor;
in vec2 mytex;
//uniform sampler2D myTexture;
uniform sampler2D Texture11;
uniform sampler2D Texture22;

//light uniform variable
uniform vec3 objcolor;
uniform vec3 lgtcolor;

//uniform sampler2D Texture33;


in vec3 vertexcolor;

void main()  //5 must add paranthesis
{

//color = texture(myTexture, mytex);
fragText =vec4(objcolor*lgtcolor,1.0);



} 