#include"utilsLoc.h"

void setOpenGlVersion(int maj, int min) {
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, maj);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, min);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

int retWhMsg(int ret, std::string const& msg) {
	std::cerr << msg << std::endl;
	return ret;
}

void destroyAndTerm(dataTD data) {
	glfwDestroyWindow(data.window);
	glfwTerminate();
}
