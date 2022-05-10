#include <iostream>
#include <GLFW/glfw3.h>
#include "GLFWWindow.h"

GLFWWindow window;

int main()
{
    if (!glfwInit())
    {
        return -1;
    }

    window.size = { 800,600 };
    window.title = "Carbonite";
    window.Open();

    window.CurrentContext();

    while (!window.ShouldClose())
    {
        glClear(GL_COLOR_BUFFER_BIT);

        window.SwapBuffers();
        glfwPollEvents();
    }

    window.Close();
}
