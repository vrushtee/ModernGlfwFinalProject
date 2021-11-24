#version 330 core 

out vec4 fragFinal;


//in vec2 mytex;
//uniform sampler2D Texture11;
//uniform sampler2D Texture22;


//in vec3 vertexcolor;

in vec3 normal;
in vec3 fragPosi;
uniform vec3 objectCol;
uniform vec3 lightCol;
uniform vec3 lightposition;

void main()  //5 must add paranthesis
{
//ambient calculation 
vec3 Ambient = objectCol * lightCol;

//diffuse calculation
vec3 normal3 = normalize(normal);
vec3 lgtdir = normalize(lightposition - fragPosi);
float diffCal = max(dot(normal3, lgtdir),0.0);
vec3 diffuse = diffCal*lightCol;

//result of ambient + diffuse
vec3 result =(Ambient+diffuse)*objectCol;


//fragText =( mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4))*vec4(vertexcolor,1.0)*vec4(result,1.0);
fragFinal =vec4(result,1.0);


} 

