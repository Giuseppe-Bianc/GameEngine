#pragma once
#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

struct dataTD {
	GLFWwindow* window;
};

void setOpenGlVersion(int maj, int min);

int retWhMsg(int ret, std::string const& msg);

void destroyAndTerm(dataTD data);
