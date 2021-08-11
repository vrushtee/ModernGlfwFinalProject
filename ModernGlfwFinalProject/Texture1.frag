#version 330 core 
out vec4 color; 

in vec3 mycolor;
in vec2 mytex;
uniform sampler2D myTexture;

//in vec4 vertexcolor;

void main()  //5 must add paranthesis
{
color = texture(myTexture, mytex);

} 

