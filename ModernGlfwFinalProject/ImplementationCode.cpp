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
//
//
//	Shader shaders1("Light11.vs", "Light11.frag");
//
//	Shader shaders3("Light24.vs", "Light24.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		
//		glm::mat4 model1= glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
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
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
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