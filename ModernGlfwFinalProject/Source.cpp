
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
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
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



//Lab 12 

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include<GL\glew.h> 
#include"Shader.h"
#include"SOIL2/SOIL2.h"

using namespace std;

//vertex shader coding part


//fragment shader coding part


void main()
{
	GLint wid = 800; //*window variable
	GLint height1 = 800; //*window variable
	GLFWwindow* window; //pointer var as window that will hold address only 
	glfwInit();

	if (!glfwInit())
	{
		cout << "glfw lib error"<<endl;
	}
	else
		cout << "glfw success"<<endl;
	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 

	// make the window context current
	glfwMakeContextCurrent(window);

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

	//Attaching shader Files 
	Shader shaders("Texture1.vs","Texture1.frag");

	GLfloat vertices[] =
	{
		-0.5f, -0.5f, 0.0f, 0.0,0.0,
		0.5f, -0.5f, 0.0f, 1.0,0.0,
		0.0f, 0.5f, 0.0f, 0.5,1.0
	};

	GLuint VBO, VAO;//vertex buffer obj//vert array obj
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	//vertices
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);


	//texture
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3* sizeof(GLfloat)));
	glEnableVertexAttribArray(2);


	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
	unsigned int texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width, height, nrChannels;
	unsigned char* image = SOIL_load_image("1064205.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);



	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0, 0, 0, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer

		//linking the shader / calling the shader
		shaders.Use();
		glBindTexture(GL_TEXTURE_2D, texture);

		//6 must pass parameter vao to see visibility of drawing 
		glBindVertexArray(VAO);

		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 3);
		//glBindVertexArray();

		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glfwTerminate();
}