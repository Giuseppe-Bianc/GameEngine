#pragma once
#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

/// <summary> a simple struct for easy delete </summary>
struct dataTD {
	GLFWwindow* window;
};

/// <summary> sets the opengl version to use and the profile </summary>
/// <param name="maj">the magior version</param>
/// <param name="min">the minor version</param>
void setOpenGlVersion(int maj, int min);

/// <summary> it's a siple function to display a error message end reurn the return code; </summary>
/// <param name="ret">the return code</param>
/// <param name="msg">the error message</param>
/// <returns>int</returns>
int retWhMsg(int ret, std::string const& msg);

/// <summary> delete the data and terminate glfw</summary>
/// <param name="data">the data to delete</param>
void destroyAndTerm(dataTD data);
