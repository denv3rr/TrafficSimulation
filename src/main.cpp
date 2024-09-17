// main.cpp - main project entrypoint

// Standard, etc.
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

// Local (headers)
#include "Vehicle.h"

int main()
{
    /******************************************
     * Loads GLFW, GLFW window, GLEW, then renders.
     *******************************************/

    // Error catch for inability to load GLFW window
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Error catch for inability to load GLFW window
    GLFWwindow *window = glfwCreateWindow(800, 600, "Traffic Simulation", nullptr, nullptr);
    if (!window)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // Error catch for inability to load GLEW
    if (glewInit() != GLEW_OK)
    {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        return -1;
    }

    Vehicle vehicle(100.0f, 100.0f);

    // Scene rendering
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        // *** RENDER SCENE ***

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
