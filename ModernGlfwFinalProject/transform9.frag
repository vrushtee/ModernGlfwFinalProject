#version 330 core 

out vec4 fragText;
out vec4 Kr;
out vec4 result;

in vec2 mytex;
uniform sampler2D Texture11;
uniform sampler2D Texture22;

uniform vec3 objcolor;
uniform vec3 lgtcolor;


in vec3 vertexcolor;

void main()  //5 must add paranthesis
{

fragText =( mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4))*vec4(vertexcolor,1.0);
Kr =vec4(objcolor*lgtcolor,1.0);

result= vec4(Kr*fragText);


} 

