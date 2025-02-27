#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

	glfwInit();


	// OpenGL ver 3.3, Core Profile for modern functionality
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); 
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	// Window Creation
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGL Window", NULL, NULL);
	if (window == NULL) {
		std::cout << "[-] Failed to create GLFW window." << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}


	// End
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}