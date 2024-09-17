// main.cpp - main project entrypoint

// Standard, etc.
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

// Local (headers)
#include "TrafficSimulation.h"

/******************************************
 * Checks for any errors in OpenGL
 *******************************************/
void checkGLError()
{
    GLenum err;
    while ((err = glGetError()) != GL_NO_ERROR)
    {
        std::cerr << "OpenGL error: " << err << std::endl;
    }
}

int main()
{
    /******************************************
     * **MAIN FUNCTION**
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

    TrafficSimulation simulation;

    // Scene rendering
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        // *** RENDER SCENE ***
        float deltaTime = 0.016f; // Assumes a fixed time step here
        simulation.update(deltaTime);
        simulation.render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
