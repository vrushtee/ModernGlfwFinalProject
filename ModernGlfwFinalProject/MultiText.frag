#version 330 core 
//out vec4 color; 
out vec4 fragText;

in vec3 mycolor;
in vec2 mytex;
//uniform sampler2D myTexture;
uniform sampler2D Texture11;
uniform sampler2D Texture22;
//uniform sampler2D Texture33;


//in vec4 vertexcolor;

void main()  //5 must add paranthesis
{
//color = texture(myTexture, mytex);
fragText = mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4);


} 

