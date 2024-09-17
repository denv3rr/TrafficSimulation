// src/Vehicle.cpp
#include "Vehicle.h"
#include <GL/glew.h>
#include <iostream>

Vehicle::Vehicle(float x, float y) : x(x), y(y), width(10.0f), height(20.0f), speed(50.0f) {}

void Vehicle::update(float deltaTime)
{
    /******************************************
     * Updates vehicle position based on speed and deltaTime
     *******************************************/
    x += speed * deltaTime;
}

void Vehicle::render()
{
    /******************************************
     * Renders the vehicle as a simple rectangle first
     *******************************************/

    std::cout << "Rendering vehicle at (" << x << ", " << y << ")" << std::endl;
    glBegin(GL_QUADS);
    glVertex2f(x - width / 2, y - height / 2);
    glVertex2f(x + width / 2, y - height / 2);
    glVertex2f(x + width / 2, y + height / 2);
    glVertex2f(x - width / 2, y + height / 2);
    glEnd();
}