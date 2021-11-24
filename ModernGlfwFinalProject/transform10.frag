#version 330 core 

out vec4 fragText;


in vec2 mytex;
uniform sampler2D Texture11;
uniform sampler2D Texture22;


in vec3 vertexcolor;

//in vec3 normal;
//in vec3 fragPosi;
uniform vec3 objectCol;
uniform vec3 lightCol;

void main()  //5 must add paranthesis
{
vec3 Ambient = objectCol * lightCol;
fragText =( mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4))*vec4(vertexcolor,1.0)*vec4(Ambient,1.0);



} 

