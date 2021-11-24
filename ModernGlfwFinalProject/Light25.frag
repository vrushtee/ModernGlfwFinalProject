#version 330 core 

out vec4 fragText;
in vec2 mytex;
in vec3 normal;
in vec3 fragPosition;
uniform vec3 lightposition;


uniform sampler2D Texture11;
uniform sampler2D Texture22;


out vec4 Kr;
uniform vec3 objcolor;
uniform vec3 lgtcolor;

in vec3 vertexcolor;

void main()  
{
fragText =( mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4))*vec4(vertexcolor,1.0);

//ambient
vec3 ambient = objcolor*lgtcolor;

//diffuse
vec3 norm2 = normalize(normal);
vec3 lightDirection = normalize(lightposition - fragPosition);
float diff = max(dot(norm2,lightDirection),0.0);
vec3 diffuse = diff*lgtcolor;
vec3 result=(ambient+diffuse)*objcolor;

Kr =vec4(result,1.0);

} 