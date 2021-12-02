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
//GLfloat rotationy = 0.0f; //step 2: for rotating in x axis
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
//	Shader shaders1("Light11.vs", "Light11.frag");
//	Shader shaders("transform11.vs", "transform11.frag");
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f,  0.1f,  0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0
//		//end
//
//	};
//
//	//object
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		//ccordinates			color				texture			normal
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//
//		//front
//		-0.1f, 0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f
//		//end
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
//
//
//	////-----------------------------------OBJECT
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//
//	//vertices //8 or 11
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//
//	//texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//normal
//	glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(8 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(3);
//
//	//done till here
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	////texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture;
//	//glGenTextures(1, &texture);
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	//unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	//glGenerateMipmap(GL_TEXTURE_2D);
//	//SOIL_free_image_data(image);
//	//glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	////texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture1;
//	//glGenTextures(1, &texture1);
//	//glBindTexture(GL_TEXTURE_2D, texture1);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	////int width, height, nrChannels;
//	//unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	//glGenerateMipmap(GL_TEXTURE_2D);
//	//SOIL_free_image_data(image1);
//	//glBindTexture(GL_TEXTURE_2D, 0);
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
//				//-----------------------------------
//		//UPPER LIGHT
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		//***************Adding the light position for diffuse calculation 
//		glm::vec3 lightposition1(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition1);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//		
//		//here we are sending the light position to shader file 
//		shaders1.setVec3("lightposition", lightposition1);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//		glBindVertexArray(0);				//********************************both required for each drawing
//
//		//-----------------------------------
//		//object
//		//linking the shader / calling the shader
//		shaders.Use();
//		//glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		//glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		//glActiveTexture(GL_TEXTURE0);
//		//glBindTexture(GL_TEXTURE_2D, texture);
//		//glActiveTexture(GL_TEXTURE1);
//		//glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//*************************Ambient Light Implementation
//		GLint objcolorloc = glGetUniformLocation(shaders.Program, "objectCol");
//		GLint lgtcolorloc = glGetUniformLocation(shaders.Program, "lightCol");
//		glUniform3f(objcolorloc, 0.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.0f, 0.0f, 0.2f);
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//		//view
//		glm::mat4 view = glm::mat4(1.0);
//		view = glm::lookAt(camPosition, camPosition + camTarget, camUp);
//		shaders.setMat4("view", view);
//		//end camera
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(50.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//
//		glm::mat4 rotate;
//		rotate = glm::rotate(rotate, glm::radians(25.0f), glm::vec3(rotationx, rotationy, 0.0f));
//		//scale data fetch from shaders
//		unsigned int rotateaccess = glGetUniformLocation(shaders.Program, "rotate");
//		glUniformMatrix4fv(rotateaccess, 1, GL_FALSE, glm::value_ptr(rotate));
//
//		//must pass parameter vao to see visibility of drawing 
//
//		glBindVertexArray(VAO[2]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		glBindVertexArray(0);		//********************************both required for each drawing
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
//
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_L:
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
//		}
//		}
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