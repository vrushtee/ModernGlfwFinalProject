#version 330 core 

in vec3 normal;
in vec3 fragPosition;
uniform vec3 lightposition;

uniform vec3 viewPosition;

out vec4 Kr;
uniform vec3 objcolor;
uniform vec3 lgtcolor;

in vec3 vertexcolor;

void main()  
{
//ambient
vec3 ambient = objcolor*lgtcolor;

//diffuse
vec3 norm2 = normalize(normal);
vec3 lightDirection = normalize(lightposition - fragPosition);
//float diff = max(dot(norm2,lightDirection),0.0);
//vec3 diffuse = diff*lgtcolor;

//specular
float strnspec=60;
vec3 dirview=normalize(viewPosition-fragPosition);
vec3 viewreflectdir=reflect(-lightDirection,norm2);
float spec1=pow(max(dot(dirview,viewreflectdir),0.0),32);
vec3 specular=strnspec*spec1*lgtcolor;


vec3 result=(ambient+specular)*objcolor;
Kr =vec4(result,1.0);
} 