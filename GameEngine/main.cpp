#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {
	if (!glfwInit()){
		std::cerr << "glfw failed to init" << std::endl;
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	auto window = glfwCreateWindow(800, 600, "game", nullptr, nullptr);
	glfwMakeContextCurrent(window);


	std::cout << "Hello Word!" << std::endl;

	glfwTerminate();
	system("pause");
	return 0;
}
