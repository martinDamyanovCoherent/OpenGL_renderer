#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;
void init(GLFWwindow* window) 
{ 
}

void display(GLFWwindow* window, double currentTime) 
{
	glClearColor(0.f, 0.5f, 0.f, 1.f);
	glClear(GL_COLOR_BUFFER_BIT);
}

int main(void) {
	if (!glfwInit()) 
	{ 
		exit(EXIT_FAILURE); 
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	GLFWwindow* window = glfwCreateWindow(800, 800, "Chapter2 - program1", NULL, NULL);
	glfwMakeContextCurrent(window);
	if (glewInit() != GLEW_OK) 
	{ 
		exit(EXIT_FAILURE); 
	}
	glfwSwapInterval(1);
	init(window);
	
	cout << "Working!\n";

	while (!glfwWindowShouldClose(window)) 
	{
		display(window, glfwGetTime());
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);

	return 0;
}