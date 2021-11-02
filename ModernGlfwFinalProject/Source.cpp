
//Lab - 1 Normal way to open the graphical window in open gl

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.1, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//Lab - 2 Shaders way to open the graphical window in open gl   *** ERROR ONE, FROM HERE WE ARE GOING TO ADD GLEW LIB FOR SHADER PROGRAMMING 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
////vertex shader coding part
//const GLchar *vshader= "#version 330 core \n"
//"layout (location=0) in vec3 position: \n"
//"void main \n"
//"{ \n"
//"gl_Position = vec4(position,1.0); \n"
//"} \n"
//;
//
////fragment shader coding part
//const GLchar* fshader = "#version 330 core \n"
//"out vec4 color \n"
//"void main \n"
//"{ \n"
//"color = vec4(1,0,0,1); \n"
//"} \n"
//;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//
//	GLint success;
//	GLchar information[512];
//	//vertex shader 
//	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(verShader,1,&vshader,NULL);
//	glCompileShader(verShader);
//	glGetShaderiv(verShader,GL_COMPILE_STATUS,&success);
//	if (!success)
//	{
//		glGetShaderInfoLog(verShader, 512, NULL, information);
//		cout << "Error in vertex shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Vertex shader compilation success" << endl;
//
//
//	//fragment shader
//	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragShader, 1, &fshader, NULL);
//	glCompileShader(fragShader);
//	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(fragShader, 512, NULL, information);
//		cout << "Error in fragment shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Fragment shader compilation success" << endl;
//
//
//
//
//
//	//Shader linking of vertex and fragment shader
//	GLuint ShaderLink = glCreateProgram();
//	glAttachShader(ShaderLink, verShader);
//	glAttachShader(ShaderLink, fragShader);
//	glLinkProgram(ShaderLink);
//	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
//		cout << "Error in linking the shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Shader Linking compilation success" << endl;
//
//	glDeleteShader(verShader);
//	glDeleteShader(fragShader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		glUseProgram(ShaderLink);
//		glBindVertexArray(0);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab - 3 Error Have been fixed 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> //1 must add the lib
//
//using namespace std;
//
////vertex shader coding part
//const GLchar *vshader= "#version 330 core \n"
//"layout (location=0) in vec3 position; \n" // 3 must need semicolon
//"void main() \n" // 4 must add paranthesis
//"{ \n"
//"gl_Position = vec4(position,1.0); \n"
//"} \n"
//;
//
////fragment shader coding part
//const GLchar* fshader = "#version 330 core \n"
//"out vec4 color; \n"
//"void main() \n" //5 must add paranthesis
//"{ \n"
//"color = vec4(1,0,0,1); \n"
//"} \n"
//;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//	cout << "glew works success\n";
//	// till here glew stuff
//
//
//	GLint success;
//	GLchar information[512];
//	//vertex shader 
//	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(verShader,1,&vshader,NULL);
//	glCompileShader(verShader);
//	glGetShaderiv(verShader,GL_COMPILE_STATUS,&success);
//	if (!success)
//	{
//		glGetShaderInfoLog(verShader, 512, NULL, information);
//		cout << "Error in vertex shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Vertex shader compilation success" << endl;
//
//
//	//fragment shader
//	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragShader, 1, &fshader, NULL);
//	glCompileShader(fragShader);
//	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(fragShader, 512, NULL, information);
//		cout << "Error in fragment shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Fragment shader compilation success" << endl;
//
//
//
//
//
//	//Shader linking of vertex and fragment shader
//	GLuint ShaderLink = glCreateProgram();
//	glAttachShader(ShaderLink, verShader);
//	glAttachShader(ShaderLink, fragShader);
//	glLinkProgram(ShaderLink);
//	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
//		cout << "Error in linking the shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Shader Linking compilation success" << endl;
//
//	glDeleteShader(verShader);
//	glDeleteShader(fragShader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		glUseProgram(ShaderLink);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab 4 How to apply triangle colors from shaders

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error"<<endl;
//	}
//	else
//		cout << "glfw success"<<endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test.vs","Test.frag");
//
//	
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab 5 How to apply colors with shaders 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0,
//		 0.5f, -0.5f, 0.0f,	0,1,0,
//		 0.0f,  0.5f, 0.0f,	0,0,1
//
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*) (3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab 6

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0,
//		 0.5f, -0.5f, 0.0f,	0,1,0,
//		 0.0f,  0.5f, 0.0f,	0,0,1
//
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab 7 by indices meethod using EBO(Element buffer object) method we will draw a quad

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//
//
//	GLfloat vertices[] =
//	{
//		//**Step 1 Provide the data according to indices
//		//2nd way
//		0.5f, 0.5f, 0.0f,1,0,0,  // top right
//		0.5f, -0.5f, 0.0f,0,1,0, // bottom right
//		-0.5f, -0.5f, 0.0f,0,0,1,  // bottom left
//		-0.5f, 0.5f, 0.0f,1,0,0  // top left 
//	};
//
//	//**Step 2 Take a new array variable for indices 
//	unsigned int indices[] = 
//	{
//		0,1,3, //1st triangle
//		1,2,3 //2nd triangle
//	};
//
//	//**Step 3 Must add EBO for element buffer object
//	GLuint VBO, VAO, EBO; //vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//	glGenBuffers(1, &EBO); //**STep 4 Must Call this function
//	glBindVertexArray(VAO);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	//**Step 5 Must add these function acc to indices variable 
//	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
//	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
//
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//**Step 6 Call the draw element array function
//		//drawing by element method 
//		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
//		
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//lab 8 triangle

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.5f, 0.0f,	0,0,1 //top
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//Lab 9 4 tris

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 1,0,0, //left
//		 0.5f, 0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, 1,0,0, //left
//		-0.6f, 0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f, 1,0,0, //left
//		 0.6f, 0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//tri 1
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//tri 2
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//tri 3
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//tri 4
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



// Lab 10 Adding rgb color using different shaders

//// 6. Create two shader programs where the second program 
////uses a different fragment shader that outputs the color 
////yellow; draw both triangles again where one outputs the 
////color orange:
//
//// for this proj i m using two frag(test,test1) shaders, ** mind it
//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//	Shader shaders1("Test2.vs", "Test3.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("Test2.vs", "right.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f,  //left
//		 0.5f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, //left
//		-0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f,  //left
//		 0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//bottom
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//top
//		shaders1.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//left
//		shaders2.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//right
//		shaders3.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



////Lab 11 Implementing keyboard

//// 6. Create two shader programs where the second program 
////uses a different fragment shader that outputs the color 
////yellow; draw both triangles again where one outputs the 
////color orange:
//
//// for this proj i m using two frag(test,test1) shaders, ** mind it
//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//
//#define SCREEN_WIDTH 640
//#define SCREEN_HEIGHT 480
//
//using namespace std;
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//
//// translation
//GLfloat transx = 0;
//GLfloat transy = 0;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCallback);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//	Shader shaders1("Test2.vs", "Test3.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("Test2.vs", "right.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f,  //left
//		 0.5f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, //left
//		-0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f,  //left
//		 0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//bottom
//		shaders.Use();	//linking the shader / calling the shader
//		glPushMatrix();
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//		glTranslatef(halfScreenWidth + transx, halfScreenHeight + transy, -500);
//		//glTranslatef(-(halfScreenWidth), -halfScreenHeight, 500);
//		glPopMatrix();
//
//		//top
//		shaders1.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//left
//		shaders2.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//right
//		shaders3.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat trans = 1;
//
//	//Translation
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//}



//Lab 12 texture in triangle

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error"<<endl;
//	}
//	else
//		cout << "glfw success"<<endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Texture1.vs","Texture1.frag");
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f, 0.0,0.0,
//		0.5f, -0.5f, 0.0f, 1.0,0.0,
//		0.0f, 0.5f, 0.0f, 0.5,1.0
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3* sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("img1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glBindTexture(GL_TEXTURE_2D, texture);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//Lab 13 texture in quad

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Texture1.vs", "Texture1.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("viper.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glBindTexture(GL_TEXTURE_2D, texture);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//lab 14 background texture

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Texture1.vs", "Texture1.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -1.0f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -1.0f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 1.0f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 1.0f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("viper.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glBindTexture(GL_TEXTURE_2D, texture);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//lab 15 texture in top triangle

//// 6. Create two shader programs where the second program 
////uses a different fragment shader that outputs the color 
////yellow; draw both triangles again where one outputs the 
////color orange:
//
//// for this proj i m using two frag(test,test1) shaders, ** mind it
//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//	Shader shaders1("Texture1.vs", "Texture1.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("Test2.vs", "right.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0 //bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, //left
//		-0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f,  //left
//		 0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("viper.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//bottom
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//top
//		shaders1.Use();	//linking the shader / calling the shader
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//left
//		shaders2.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//right
//		shaders3.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



//16 texture in bottom triangle(making new texture)

//// 6. Create two shader programs where the second program 
////uses a different fragment shader that outputs the color 
////yellow; draw both triangles again where one outputs the 
////color orange:
//
//// for this proj i m using two frag(test,test1) shaders, ** mind it
//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("BtmText.vs", "BtmText.frag");
//	Shader shaders1("TopText.vs", "TopText.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("Test2.vs", "right.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, 0.0,0.0,//left
//		 0.5f, -0.5f, 0.0f,	0,1,0, 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,	0,0,1, 0.0,1.0//top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, 1,0,0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, 0,1,0,//right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0, 0,0,1//bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, //left
//		-0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f,  //left
//		 0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	//position
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	//position
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//	
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("viper.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//bottom
//		shaders.Use();	//linking the shader / calling the shader
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//top
//		shaders1.Use();	//linking the shader / calling the shader
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//left
//		shaders2.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//right
//		shaders3.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}


//17 multitexture quad

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("MultiText.vs", "MultiText.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//18 **** by this method we cannot hold / store more than 2 textures so for more than 2 texture there will be new concept that will be related to skybox that we will do later in skybox topic
// that's why error will be there for 3 textures and for 2 textures it will be running fine.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("MultiText.vs", "MultiText.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-3 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image3.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture33"), 2);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE2);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//19 right triangle multitexture

//// 6. Create two shader programs where the second program 
////uses a different fragment shader that outputs the color 
////yellow; draw both triangles again where one outputs the 
////color orange:
//
//// for this proj i m using two frag(test,test1) shaders, ** mind it
//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader 
//
//	//fragment shader
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//	Shader shaders1("Texture1.vs", "Texture1.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//
//	GLfloat bottom[] =
//	{
//		-0.5f, -0.5f, 0.0f, 1,0,0, //left
//		 0.5f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top
//
//	};
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0 //bottom
//
//	};
//	GLfloat left[] =
//	{
//		-0.6f, -0.5f, 0.0f, //left
//		-0.6f, 0.5f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//
//	};
//	GLfloat right[] =
//	{
//		 0.6f, -0.5f, 0.0f,  0.0,0.0,//left
//		 0.6f,  0.5f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//
//	};
//
//	unsigned int VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//bottom triangle
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//top triangle
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//left triangle
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); ////vertex
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	//right triangle
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); //vertex
//	glEnableVertexAttribArray(0); //vertex
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	//glEnableVertexAttribArray(1); //color
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("viper.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//bottom
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//top
//		shaders1.Use();	//linking the shader / calling the shader
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//left
//		shaders2.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//right
//		shaders3.Use();	//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}


//20 color in quad multitexture

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("MultiText.vs", "MultiText.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0f, -0.5f, 0.0f, 0.0,1.0, //1,0,0,//bottom left
//		 1.0f, -0.5f, 0.0f, 1.0,1.0, //0,1,0,//bottom right
//		 1.0f,  0.5f, 0.0f, 1.0,0.0, //0,0,1,//top right
//		-1.0f,  0.5f, 0.0f, 0.0,0.0 //0,0,0//top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); //color
//	glEnableVertexAttribArray(1); //color
//
//	
//	//texture
//	//glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//21 TSR without keys on quad

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//-------- HOMEWORK ---------------

// 1. Done: Apply transformation(T, S, R) on any 1 object of your 4 triangle textured color project.
//2. In quad textured transformation output apply the keys activity on the object 1 by 1, meaning translation, rotationand scaling.(Do one by one for each backup code)
	//a. Done: translation using keys
	//b. Done: scaling using keys
	//c. Final Implementation left: rotation using keys
//3. Apply transformation(T, S, R) on any 2 objects of your 4 triangles textured color project, using separate keys both should be interactive.
	//a. Done: translation using keys
	//b. Done: scaling using keys
	//c. rotation using keys
//4. From the Opengl transformation chapter try to do the exercise and understand, (optional)
	//a. Done
	//Using the last transformation on the container, try switching the order around by first rotating and then translating.
	//See what happens and try to reason why this happens.

	//b. Done
	//Try drawing a second container with another call to glDrawElements but place it at a different position using transformations only.
	//Make sure this second container is placed at the top - left of the window and instead of rotating, scale it over time
	//(using the sin function is useful here; note that using sin will cause the object to invert as soon as a negative scale is applied

//22 Apply transformation(T, S, R) without keys on any 1 object of your 4 triangle textured color project.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
////Step 1 for tsr: Graphics Lib for mathematics.
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //window variable
//	GLint height1 = 1000; //window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader / fragment shader / shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("Test2.vs", "Test2.frag");
//	Shader shaders1("triangletsr.vs", "triangletsr.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//	GLfloat bottom[] =
//	{
//		-0.4f, -0.4f, 0.0f, 1,0,0, //left
//		 0.4f, -0.4f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top 
//	};
//
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0 //bottom
//
//	};
//
//	GLfloat left[] =
//	{
//		-0.4f, -0.4f, 0.0f, //left
//		-0.4f, 0.4f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//	};
//
//	GLfloat right[] =
//	{
//		 0.4f, -0.4f, 0.0f,  0.0,0.0,//left
//		 0.4f,  0.4f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//BOTTOM TRIANGLE
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); 
//	glEnableVertexAttribArray(1); 
//
//	//------------------------------
//
//	//TOP TRIANGLE
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//------------------------------
//
//	//LEFT TRIANGLE
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//------------------------------
//
//	//RIGHT TRIANGLE
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); //vertex
//	
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture 1: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture 2: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//BOTTOM
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0, -0.5, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//------------------------------
//
//		//TOP
//		shaders1.Use();	
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		transforme1 = glm::translate(transforme1, glm::vec3(0.0, 0.5, 0));
//		transforme1 = glm::scale(transforme1, glm::vec3(0.5, 0.5, 0));
//		transforme1 = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces2 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//		//------------------------------
//
//		//LEFT
//		shaders2.Use();	
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//------------------------------
//
//		//RIGHT
//		shaders3.Use();	
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



//23 translation in quad using keys

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part / fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader / fragment shader / Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-0.25, -0.25, 0.0f, 0.0,1.0, //bottom left
//		 0.25, -0.25, 0.0f, 1.0,1.0, //bottom right
//		 0.25,  0.25, 0.0f, 1.0,0.0, //top right
//		-0.25,  0.25, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		//transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//}



//24 scaling in quad using keys

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part / fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader / fragment shader / Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-0.25, -0.25, 0.0f, 0.0,1.0, //bottom left
//		 0.25, -0.25, 0.0f, 1.0,1.0, //bottom right
//		 0.25,  0.25, 0.0f, 1.0,0.0, //top right
//		-0.25,  0.25, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transforme = glm::scale(transforme, glm::vec3(scalefactor, scalefactor, scalefactor));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//
//
//		switch (key)
//		{
//			case GLFW_KEY_W:
//			{
//
//				if (scalefactor <= 2.0)
//				{
//					scalefactor += 0.01;
//				}
//				else
//					scaleUp = false;
//				break;
//			}
//			case GLFW_KEY_S:
//			{
//
//				if (scalefactor >= 0.5)
//				{
//					scalefactor -= 0.01;
//
//				}
//				else
//					scaleUp = true;
//				break;
//			}
//
//		}
//
//	}
//}



//25 rotation in quad using keys

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part / fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in y axis
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader / fragment shader / Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-0.25, -0.25, 0.0f, 0.0,1.0, //bottom left
//		 0.25, -0.25, 0.0f, 1.0,1.0, //bottom right
//		 0.25,  0.25, 0.0f, 1.0,0.0, //top right
//		-0.25,  0.25, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		//transforme = glm::scale(transforme, glm::vec3(scalefactor, scalefactor, scalefactor));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 1), glm::vec3(-1.0, 0, -1.0));
//		//glRotatef(rotationx, 1, 0, 0);
//		//glRotatef(rotationy, 0, 1, 0);
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 10;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//}



//26 translation for 2 objects in triangle

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
////Step 1 for tsr: Graphics Lib for mathematics.
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); // step1
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//void main()
//{
//	GLint wid = 1200; //window variable
//	GLint height1 = 1000; //window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader / fragment shader / shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("strbottom.vs", "strbottom.frag");
//	Shader shaders1("triangletsr.vs", "triangletsr.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//	GLfloat bottom[] =
//	{
//		-0.4f, -0.5f, 0.0f, 1,0,0, //left
//		 0.4f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f, -0.1f, 0.0f, 0,0,1 //top 
//	};
//
//	GLfloat top[] =
//	{
//		-0.4f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.4f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f, 0.1f, 0.0f, 0.0,1.0 //bottom
//
//	};
//
//	GLfloat left[] =
//	{
//		-0.4f, -0.4f, 0.0f, //left
//		-0.4f, 0.4f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//	};
//
//	GLfloat right[] =
//	{
//		 0.4f, -0.4f, 0.0f,  0.0,0.0,//left
//		 0.4f,  0.4f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//BOTTOM TRIANGLE
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); 
//	glEnableVertexAttribArray(1); 
//
//	//------------------------------
//
//	//TOP TRIANGLE
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//------------------------------
//
//	//LEFT TRIANGLE
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//------------------------------
//
//	//RIGHT TRIANGLE
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); //vertex
//	
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture 1: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture 2: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//BOTTOM
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		transforme1 = glm::translate(transforme1, glm::vec3(0.0 + transx1, 0.0 + transy1, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		//transforme = glm::scale(transforme1, glm::vec3(0.5, 0.5, 0));
//		//transforme = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces2 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//		//------------------------------
//
//		//TOP
//		shaders1.Use();	
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		//transforme = glm::scale(transforme1, glm::vec3(0.5, 0.5, 0));
//		//transforme = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces3 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces3, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//------------------------------
//
//		//LEFT
//		shaders2.Use();	
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//------------------------------
//
//		//RIGHT
//		shaders3.Use();	
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_UP:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_DOWN:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_LEFT:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//}



//27 scaling for 2 objects in triangle

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
////Step 1 for tsr: Graphics Lib for mathematics.
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); // step1
//
//GLfloat scalefactor = 1.0f; //step 2 for scaling
//GLboolean scaleUp = false;
//
//GLfloat scalefactor1 = 1.0f; //step 2 for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 1200; //window variable
//	GLint height1 = 1000; //window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader / fragment shader / shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("strbottom.vs", "strbottom.frag");
//	Shader shaders1("triangletsr.vs", "triangletsr.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//	GLfloat bottom[] =
//	{
//		-0.4f, -0.5f, 0.0f, 1,0,0, //left
//		 0.4f, -0.5f, 0.0f,	0,1,0, //right
//		 0.0f, -0.1f, 0.0f, 0,0,1 //top 
//	};
//
//	GLfloat top[] =
//	{
//		-0.4f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.4f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f, 0.1f, 0.0f, 0.0,1.0 //bottom
//
//	};
//
//	GLfloat left[] =
//	{
//		-0.4f, -0.4f, 0.0f, //left
//		-0.4f, 0.4f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//	};
//
//	GLfloat right[] =
//	{
//		 0.4f, -0.4f, 0.0f,  0.0,0.0,//left
//		 0.4f,  0.4f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//BOTTOM TRIANGLE
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); 
//	glEnableVertexAttribArray(1); 
//
//	//------------------------------
//
//	//TOP TRIANGLE
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//------------------------------
//
//	//LEFT TRIANGLE
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//------------------------------
//
//	//RIGHT TRIANGLE
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); //vertex
//	
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture 1: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture 2: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//BOTTOM
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		//transforme1 = glm::translate(transforme1, glm::vec3(0.0 + transx1, 0.0 + transy1, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transforme1 = glm::scale(transforme1, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme1 = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces2 = glGetUniformLocation(shaders.Program, "transform1");
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//		//------------------------------
//
//		//TOP
//		shaders1.Use();	
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transforme = glm::scale(transforme, glm::vec3(scalefactor, scalefactor, scalefactor));
//		//transforme = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces3 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces3, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//------------------------------
//
//		//LEFT
//		shaders2.Use();	
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//------------------------------
//
//		//RIGHT
//		shaders3.Use();	
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//			case GLFW_KEY_U:
//			{
//
//				if (scalefactor <= 2.0)
//				{
//					scalefactor += 0.01;
//				}
//				else
//					scaleUp = false;
//				break;
//			}
//			case GLFW_KEY_J:
//			{
//
//				if (scalefactor >= 0.5)
//				{
//					scalefactor -= 0.01;
//
//				}
//				else
//					scaleUp = true;
//				break;
//			}
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//			case GLFW_KEY_S:
//			{
//
//				if (scalefactor1 >= 0.5)
//				{
//					scalefactor1 -= 0.01;
//
//				}
//				else
//					scaleUp1 = true;
//				break;
//			}
//		}
//	}
//}



//28 4.a 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//		transforme = glm::translate(transforme, glm::vec3(0.8, 0.5, 0));
//
//		//transforme = glm::translate(transforme, glm::vec3(0.8, 0.5, 0));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//28 4.b

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
////Step 1 for tsr: Graphics Lib for mathematics.
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //window variable
//	GLint height1 = 1000; //window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//	//vertex shader / fragment shader / shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("fourBstr.vs", "fourBstr.frag");
//	Shader shaders1("triangletsr.vs", "triangletsr.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//	GLfloat bottom[] =
//	{
//		-0.4f, -0.4f, 0.0f, 1,0,0, //left
//		 0.4f, -0.4f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top 
//	};
//
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0 //bottom
//
//	};
//
//	GLfloat left[] =
//	{
//		-0.4f, -0.4f, 0.0f, //left
//		-0.4f, 0.4f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//	};
//
//	GLfloat right[] =
//	{
//		 0.4f, -0.4f, 0.0f,  0.0,0.0,//left
//		 0.4f,  0.4f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//BOTTOM TRIANGLE
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); 
//	glEnableVertexAttribArray(1); 
//
//	//------------------------------
//
//	//TOP TRIANGLE
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//------------------------------
//
//	//LEFT TRIANGLE
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//------------------------------
//
//	//RIGHT TRIANGLE
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); //vertex
//	
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture 1: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture 2: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//BOTTOM
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0, -0.5, 0));
//		//transforme = glm::scale(transforme, glm::vec3(0.5, 0.5, 0));
//		float scaleAmount = sin(glfwGetTime());
//		transforme = glm::scale(transforme, glm::vec3(scaleAmount, scaleAmount, scaleAmount));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform1");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//------------------------------
//
//		//TOP
//		shaders1.Use();	
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		transforme1 = glm::translate(transforme1, glm::vec3(0.0, 0.5, 0));
//		transforme1 = glm::scale(transforme1, glm::vec3(0.5, 0.5, 0));
//		transforme1 = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces2 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//		//------------------------------
//
//		//LEFT
//		shaders2.Use();	
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//------------------------------
//
//		//RIGHT
//		shaders3.Use();	
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



//******* Start 3d Implementation

//29 How to implement 3d technique on 2d object using model, view, projection (MVP) that will behvae like 2.5D

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform1.vs", "transform1.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//step 2 Transformation stuff
//
//		////model
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0, 0.0, 0.0));
//
//		////view
//		//glm::mat4 view = glm::mat4(1.0f);
//		//view = glm::translate(view, glm::vec3(0.5, 0.5, 0));
//
//		////projection
//		//glm::mat4 projection;
//		////projection = glm::scale(projection, glm::vec3(0.25, 0.25, 0));
//		//projection=glm::perspective(glm::radians(45.0f), (float)width / (float)height, 0.5f, 100.0f);
//
//	
//		////Model
//		// int modelAccess = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(modelAccess, 1, GL_FALSE, glm::value_ptr(model));
//
//		////View
//		// int viewAccess = glGetUniformLocation(shaders.Program, "view");
//		//glUniformMatrix4fv(viewAccess, 1, GL_FALSE,(&view[0][0]));
//
//		////Projection
//		// int projectionAccess = glGetUniformLocation(shaders.Program, "projection");
//		//glUniformMatrix4fv(projectionAccess, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::rotate(transforme, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//30 How to implement 3d technique on 2d object using model, view, projection (MVP) that will behvae like 2.5D

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform2.vs", "transform2.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.25, 0.25, 0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//scale
//		glm::mat4 scale = glm::mat4(1.0f);
//		scale = glm::scale(scale, glm::vec3(0.5, 0.5, 0));
//		
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "scale");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(scale));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//31** My first 3d object using shaders and buffers

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform3.vs", "transform3.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, 1,0,0,//bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, 0,1,0,//bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, 0,0,1,//top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, 1,0,0//top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.25, 0.25, 0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//scale
//		glm::mat4 scale = glm::mat4(1.0f);
//		scale = glm::scale(scale, glm::vec3(0.5, 0.5, 0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "scale");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(scale));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//32** 3d Object Projection by perspective, we are drawing 3d object using MVP(Model, View, Projection)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1); 
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0, -0.3, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(45.0f),(float)wid/(float)height1,0.1f,100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}






//33 Translate in a different way


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}




//34 Hw: 
//- [1]  The present last last output of cube make it interactive, first by keys it should scale,second by key make rotation, third by keys make translation, fourth combine all with different keys
//-[2]  Draw at least 4 3d objects at different - different positions having equal their sizes
//- [3]  Question number 2nd make it interactive as question number 1st

//[1] [A] Translate

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0+transx, 0.0+transy, 0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//}

//[1] [B] Scale

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f,  0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f,  0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f,  0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		 0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		 0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f,  0.1f,  -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f,  0.1f,  -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f,   0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f,   0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f,  0.1f,   0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::scale(projection, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}

//[1] [C] Rotation 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//with sin/tan angle
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 100;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//}


//-[2]  Draw at least 4 3d objects at different - different positions having equal their sizes

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform4.vs", "transform4.frag");
//
//	Shader shaders2("transform4.vs", "transform4.frag");
//
//	Shader shaders3("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//----------------------------------------------
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//----------------------------------------------
//
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//----------------------------------------------
//
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//----------------------------------------------
//
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//----------------------------------------------
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-3.0, -2.0, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(140.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		//----------------------------------------------
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(3.0, -2.0, -3.0));
//
//		//view
//		glm::mat4 view1 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection1;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		//----------------------------------------------
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(3.0, 2.0, -3.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection2;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces2 = glGetUniformLocation(shaders2.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		//----------------------------------------------
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-3.0, 2.0, -3.0));
//
//		//view
//		glm::mat4 view3 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection3;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces3 = glGetUniformLocation(shaders3.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces3 = glGetUniformLocation(shaders3.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//[3][A] //Translate

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx2, -0.5 + transy2, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx3, -0.5 + transy3, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_T:
//			transy2 += trans;
//			break;
//
//		case GLFW_KEY_G:
//			transy2 -= trans;
//			break;
//
//		case GLFW_KEY_F:
//			transx2 -= trans;
//			break;
//
//		case GLFW_KEY_H:
//			transx2 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//36 Multiple cubes at different positions by using position array to a single object

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{ 
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i=1; i<=10; i++) 
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0*i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model= glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//37
//-[A]  Set of 2 applies all key properties together in each set as we did in the very last output.
//- [B]  Consider all 4 objects as one set and apply all key properties together in each set as we did in the very last output.
//- [C]  In the very last outcome we applied all properties on the cube, just replace the cube by a triangle.


//-[A]  Set of 2 applies all key properties together in each set as we did in the very last output.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//	Shader shaders1("transform5.vs", "transform5.frag");
//	Shader shaders2("transform6.vs", "transform6.frag");
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//		shaders.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation/model
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view/rotate
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//transformation/scale
//		glm::mat4 transform = glm::mat4(1.0f);
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model"); 		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view"); 		//view data fetch from shaders
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");		//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		shaders1.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//transformation/scale
//		glm::mat4 transform1 = glm::mat4(1.0f);
//		transform1 = glm::scale(transform1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces1 = glGetUniformLocation(shaders1.Program, "transform1");		//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces1, 1, GL_FALSE, glm::value_ptr(transform1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		//-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		shaders2.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation/model
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx, -0.5 + transy, 0.0));
//
//		//rotate/view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//transform
//		glm::mat4 transform2 = glm::mat4(1.0f);
//		transform2 = glm::scale(transform2, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2"); 		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");		//view data fetch from shaders
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		unsigned int transformacces2 = glGetUniformLocation(shaders2.Program, "transform2");	//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transform2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		//-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx1, -0.5 + transy1, 0.0));
//
//		//transform
//		glm::mat4 transform3 = glm::mat4(1.0f);
//		transform3 = glm::scale(transform3, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int transformacces3 = glGetUniformLocation(shaders3.Program, "transform3");	//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces3, 1, GL_FALSE, glm::value_ptr(transform3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_N:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_M:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}


//- [B]  Consider all 4 objects as one set and apply all key properties together in each set as we did in the very last output.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//	Shader shaders1("transform5.vs", "transform5.frag");
//	Shader shaders2("transform6.vs", "transform6.frag");
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//		shaders.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation/model
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view/rotate
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//transformation/scale
//		glm::mat4 transform = glm::mat4(1.0f);
//		transform = glm::scale(transform, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model"); 		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view"); 		//view data fetch from shaders
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");		//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		shaders1.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx, 0.0 + transy, 0.0));
//
//		//transformation/scale
//		glm::mat4 transform1 = glm::mat4(1.0f);
//		transform1 = glm::scale(transform1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces1 = glGetUniformLocation(shaders1.Program, "transform1");		//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces1, 1, GL_FALSE, glm::value_ptr(transform1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		//-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		shaders2.Use();		//linking the shader / calling the shader
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation/model
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx, -0.5 + transy, 0.0));
//
//		//rotate/view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//transform
//		glm::mat4 transform2 = glm::mat4(1.0f);
//		transform2 = glm::scale(transform2, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2"); 		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");		//view data fetch from shaders
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		unsigned int transformacces2 = glGetUniformLocation(shaders2.Program, "transform2");	//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transform2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		//-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx, -0.5 + transy, 0.0));
//
//		//transform
//		glm::mat4 transform3 = glm::mat4(1.0f);
//		transform3 = glm::scale(transform3, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");		//translation data fetch from shaders
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int transformacces3 = glGetUniformLocation(shaders3.Program, "transform3");	//transform data fetch from shaders
//		glUniformMatrix4fv(transformacces3, 1, GL_FALSE, glm::value_ptr(transform3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//
//
//}


//- [C]  In the very last outcome we applied all properties on the cube, just replace the cube by a triangle.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		//-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		//-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		//-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		//-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		//-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		//-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		//-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		//-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		//0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		//0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		//0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		//0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		//0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		//0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		//-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		//0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		//0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		//0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		//-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		//-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		//-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		//0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		//0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		//0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		//-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		//-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}




//38 Multiple cube object

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}

//39 Whatever the last outcome you have make it full interactive with keys
//	1. Rotate by keys clockwiseand anti clockwise in z - axis only
//	2. Move by the keys LRTB
//	3. Zoom in & Zoom out
//	4. All above 3 together


//	1. Rotate by keys clockwiseand anti clockwise in z - axis only

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			//model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//}


//	2. Move by the keys LRTB

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model,glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//}


//	3. Zoom in & Zoom out (doubt)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::scale(view, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
////			model = glm::translate(model,glm::vec3(scalefactor, scalefactor, scalefactor));
////		projection = glm::scale(projection, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}


//	4. All above 3 together

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::scale(view, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//	
//		case GLFW_KEY_U:
//			transy += trans;
//			break;
//	
//		case GLFW_KEY_J:
//			transy -= trans;
//			break;
//	
//		case GLFW_KEY_H:
//			transx -= trans;
//			break;
//	
//		case GLFW_KEY_K:
//			transx += trans;
//			break;
//	
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}



// 40 Must check the 3d triangle data in the same outcome

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//using namespace std;
//
//
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//int main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::scale(view, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//	
//		case GLFW_KEY_U:
//			transy += trans;
//			break;
//	
//		case GLFW_KEY_J:
//			transy -= trans;
//			break;
//	
//		case GLFW_KEY_H:
//			transx -= trans;
//			break;
//	
//		case GLFW_KEY_K:
//			transx += trans;
//			break;
//	
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		//back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		//top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//
//		//bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	//color
//	//GLfloat colors[] =
//	/*{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};*/
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	//glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	//glEnableClientState(GL_COLOR_ARRAY);
//	//glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//	glDisableClientState(GL_VERTEX_ARRAY);
//}
//
//
////-----------------------------------------------------------------------------------------------------------------------------
//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
//#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
////scaling
//GLfloat scalefactor = 1.0f;
//GLboolean scaleup = false;
//
//
////translate
//GLfloat transx = 0;
//GLfloat transy = 0;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//
//		//scaling
//		glScalef(scalefactor, scalefactor, scalefactor);
//
//		//translate
//		glTranslatef(-0.3 + transx, -0.3 + transy, -5);
//
//
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//	const GLfloat trans = 1;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy -= rotationSpeed;
//			break;
//
//
//		case GLFW_KEY_UP:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_DOWN:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_LEFT:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//	
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_R:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_G:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_B:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_M:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_KP_ADD:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.1;
//			}
//			else
//				scaleup = false;
//			break;
//		}
//		case GLFW_KEY_KP_SUBTRACT:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.1;
//
//			}
//			else
//				scaleup = true;
//			break;
//		}
//
//		}
//
//	}
//
//
//}
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		//back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		//top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//
//		//bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}



//41 Camera with keys and mouse

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		const float radius = 10.0f;
//		float cameraX = sin(glfwGetTime()) * radius;
//		float cameraZ = cos(glfwGetTime()) * radius;
//
//		//view
//		glm::mat4 view;
//		view = glm::lookAt(glm::vec3(cameraX, 0.0, cameraZ), glm::vec3(0.0, 0.0, 0.0), glm::vec3(0.0, 1.0, 0.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f, 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_U:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_J:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_H:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_K:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}


//42 O/p with camera keys and mouse

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//
//using namespace std;
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
////vertex shader coding part
////fragment shader coding part
//
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//// camera 
//glm::vec3 camPosition = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 camTarget = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 camUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
//// timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
////declaration part of keys
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	
//	//mouse calling part
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetScrollCallback(window, ScrollCallback);
//	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform8.vs", "transform8.frag");
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//
//		//start camera
//		//const float radius = 10.0f;
//		//float cameraX = sin(glfwGetTime()) * radius;
//		//float cameraZ = cos(glfwGetTime()) * radius;
//
//		//view
//		glm::mat4 view = glm::mat4(1.0);
//		view = glm::lookAt(camPosition, camPosition +camTarget, camUp);
//		shaders.setMat4("view", view);
//		//end camera
//
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f, 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_U:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_J:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_H:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_K:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//}
//
//
////all about mouse activity
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	camTarget = glm::normalize(front);
//
//}


//---------------light----------

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include<GL\glew.h> 
#include"Shader.h"
#include"SOIL2/SOIL2.h"
#include <glm/glm.hpp>//Graphics Lib for mathematics.
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;

//vertex shader coding part //fragment shader coding part

void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall

GLfloat transx = 0; //  step 2: for translation in x axis
GLfloat transy = 0; //  step2: for translation in y axis

GLfloat transx1 = 0; //  step 2: for translation in x axis
GLfloat transy1 = 0; //  step2: for translation in y axis

GLfloat transx2 = 0; //  step 2: for translation in x axis
GLfloat transy2 = 0; //  step2: for translation in y axis

GLfloat transx3 = 0; //  step 2: for translation in x axis
GLfloat transy3 = 0; //  step2: for translation in y axis

GLfloat scalefactor1 = 1.0f; //step 2: for scaling
GLboolean scaleUp1 = false;

void main()
{
	GLint wid = 2000; //*window variable
	GLint height1 = 1500; //*window variable
	GLFWwindow* window; //pointer var as window that will hold address only 
	glfwInit();

	if (!glfwInit())
	{
		cout << "glfw lib error" << endl;
	}
	else
		cout << "glfw success" << endl;
	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 

	// make the window context current
	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback

	// 2.   **************** here must add glew function use*********
	if (glewInit() != GLEW_OK)
	{
		cout << "fail to open glew\n";

	}
	else
		cout << "glew works success\n";
	// till here glew stuff
	//vertex shader 
	//fragment shader
	//Shader linking of vertex and fragment shader

	//view port
	glViewport(0, 0, wid, height1);

	glEnable(GL_DEPTH_TEST);

	//Attaching shader Files 


	Shader shaders1("AmbLight1.vs", "AmbLight1.frag");


	Shader shaders3("AmbLight2.vs", "AmbLight2.frag");


	//UPPER
	GLfloat vertices1[] =
	{
		// step-1 change vertices as cube and add color too
		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,

		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,

		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,

		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,

		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,

		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
		0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
		//end

	};

	//LOWER
	GLfloat vertices3[] =
	{
		// step-1 change vertices as cube and add color too
		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,

		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,

		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,

		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,

		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,

		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
		//end

	};

	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
	glGenVertexArrays(4, VAO);
	glGenBuffers(4, VBO);


	//-----------------------------------

	glBindVertexArray(VAO[1]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
	//vertices1
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);
	//texture
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);


	////-----------------------------------

	glBindVertexArray(VAO[3]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
	//vertices3
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);
	//texture
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	//-----------------------------------

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
	unsigned int texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width, height, nrChannels;
	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);


	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
	unsigned int texture1;
	glGenTextures(1, &texture1);
	glBindTexture(GL_TEXTURE_2D, texture1);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);



	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0, 0, 0, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer


		//-----------------------------------
		//UPPER

		//2nd
		//linking the shader / calling the shader
		shaders1.Use();
		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, texture);
		glActiveTexture(GL_TEXTURE1);
		glBindTexture(GL_TEXTURE_2D, texture1);

		//translation
		glm::mat4 model1 = glm::mat4(1.0f);
		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));

		//step 3 get the uniform data from the vs shader file
		//translation data fetch from shaders
		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));

		//6 must pass parameter vao to see visibility of drawing 
		glBindVertexArray(VAO[1]);
		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing		

		////-----------------------------------
		//TRANS, SCALE

		//MIDDLE
		//linking the shader / calling the shader
		shaders3.Use();

		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
		glUniform3f(objcolorloc, 0.0f, 0.5f, 0.0f);
		glUniform3f(lgtcolorloc, 0.0f, 0.5f, 0.0f);

		//translation
		glm::mat4 model3 = glm::mat4(1.0f);
		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));

		//step 3 get the uniform data from the vs shader file
		//translation data fetch from shaders
		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));

		//6 must pass parameter vao to see visibility of drawing 
		glBindVertexArray(VAO[3]);
		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing

		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}
	glDeleteVertexArrays(1, VAO);
	glDeleteBuffers(4, VBO);
	glfwTerminate();
}

void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
{
	const GLfloat trans = 0.1;

	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{

		case GLFW_KEY_W:
			transy1 += trans;
			break;

		case GLFW_KEY_S:
			transy1 -= trans;
			break;

		case GLFW_KEY_A:
			transx1 -= trans;
			break;

		case GLFW_KEY_D:
			transx1 += trans;
			break;

		default:
			break;
		}
	}



	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{

		case GLFW_KEY_I:
			transy3 += trans;
			break;

		case GLFW_KEY_K:
			transy3 -= trans;
			break;

		case GLFW_KEY_J:
			transx3 -= trans;
			break;

		case GLFW_KEY_L:
			transx3 += trans;
			break;

		default:
			break;
		}
	}

	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		//scale factor conditions, boundaries for zoom in zoom out of the object
		switch (key)
		{
		case GLFW_KEY_Z:
		{

			if (scalefactor1 <= 2.0)
			{
				scalefactor1 += 0.01;
			}
			else
				scaleUp1 = false;
			break;
		}
		case GLFW_KEY_X:
		{

			if (scalefactor1 >= 0.5)
			{
				scalefactor1 -= 0.01;

			}
			else
				scaleUp1 = true;
			break;
		}

		}

	}
}