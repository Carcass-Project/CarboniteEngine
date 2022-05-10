#pragma once
#include <iostream>
#include <string>
#include <GLFW/glfw3.h>
#include "mathlib.h"
#include "Window.h"

class GLFWWindow : Window
{
public:
	Vector2 size;
	std::string title;
	GLFWwindow* native_wnd;
	GLFWmonitor* dsp_monitor = glfwGetPrimaryMonitor();

	void Open();
	bool ShouldClose();
	void SwapBuffers();
	void CurrentContext();
	void Close();
};