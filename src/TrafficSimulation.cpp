// src/TrafficSimulation.cpp
/******************************************
 * Handles traffic simulation logic
 *******************************************/
#include "TrafficSimulation.h"
#include <iostream>

void TrafficSimulation::run()
{
    /******************************************
     * Runs traffic simulation logic
     *******************************************/
    std::cout << "Running simulation..." << std::endl;

    // Initialize vehicles
    vehicles.push_back(Vehicle(100.0f, 100.0f));

    // ADD VEHICLES under here ****************
}

/******************************************
 * Traffic Logic
 *******************************************/

void TrafficSimulation::update(float deltaTime)
{
    /******************************************
     * Traffic update
     *******************************************/
    for (auto &vehicle : vehicles)
    {
        vehicle.update(deltaTime);
    }
}

void TrafficSimulation::render()
{
    /******************************************
     * Traffic render
     *******************************************/
    for (auto &vehicle : vehicles)
    {
        vehicle.render();
    }
}
