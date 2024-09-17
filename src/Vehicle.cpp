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