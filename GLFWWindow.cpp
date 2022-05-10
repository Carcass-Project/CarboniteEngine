#include "GLFWWindow.h"

void GLFWWindow::Open()
{
	this->native_wnd = glfwCreateWindow(this->size.x, this->size.y, this->title.c_str(), this->dsp_monitor, NULL);
	glfwShowWindow(this->native_wnd);
	glfwFocusWindow(this->native_wnd);
}

bool GLFWWindow::ShouldClose()
{
	return glfwWindowShouldClose(this->native_wnd);
}

void GLFWWindow::SwapBuffers()
{
	glfwSwapBuffers(this->native_wnd);
}

void GLFWWindow::CurrentContext()
{
	glfwMakeContextCurrent(this->native_wnd);
}

void GLFWWindow::Close()
{
	glfwDestroyWindow(this->native_wnd);
}