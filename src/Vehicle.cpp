// src/Vehicle.cpp
#include "Vehicle.h"
#include <GL/glew.h>

Vehicle::Vehicle(float x, float y) : x(x), y(y), speed(50.0f) {}

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
    glBegin(GL_QUADS);
    glVertex2f(x - 5.0f, y - 5.0f);
    glVertex2f(x + 5.0f, y - 5.0f);
    glVertex2f(x + 5.0f, y + 5.0f);
    glVertex2f(x - 5.0f, y + 5.0f);
    glEnd();
}