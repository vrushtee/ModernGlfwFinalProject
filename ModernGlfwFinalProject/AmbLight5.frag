#version 330 core 

out vec4 fragColor;
in vec3 normal;
in vec3 fragPos;
uniform vec3 lightPos;

out vec4 color; 
uniform vec3 objcolor;
uniform vec3 lgtcolor;
in vec3 vertexcolor;

void main()  //5 must add paranthesis
{
//ambient
vec3 ambient = objcolor*lgtcolor;

//diffuse
vec3 norm2 = normalize(normal);
vec3 lightDirection = normalize(lightPos - fragPos);
float diff = max(dot(norm2,lightDirection),0.0);
vec3 diffuse = diff*lgtcolor;


//result
vec3 result = (ambient+diffuse)*objcolor;

//final utilization
color =vec4(result,1.0);
} 