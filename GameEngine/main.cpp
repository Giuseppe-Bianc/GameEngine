#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include"utilsLoc.h"

int main() {
	if (!glfwInit()){
		return retWhMsg(1, "glfw failed to init");
	}
	dataTD datatd{};

	setOpenGlVersion(4, 4);
	datatd.window = glfwCreateWindow(800, 600, "game", nullptr, nullptr);
	if (!datatd.window) {
		destroyAndTerm(datatd);
		return retWhMsg(-1, "window failed to init");
	}
	glfwMakeContextCurrent(datatd.window);

	while (!glfwWindowShouldClose(datatd.window)){
		glfwSwapBuffers(datatd.window);
		glfwPollEvents();
	}

	std::cout << "Hello Word!" << std::endl;

	destroyAndTerm(datatd);
	return 0;
}
