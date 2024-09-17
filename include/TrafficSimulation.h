// include/TrafficSimulation.h
#ifndef TRAFFICSIMULATION_H
#define TRAFFICSIMULATION_H

#include <vector>
#include "Vehicle.h"

class TrafficSimulation
{
public:
    TrafficSimulation();
    void update(float deltaTime);
    void render();
    void run();

private:
    std::vector<Vehicle> vehicles;
};

#endif // TRAFFICSIMULATION_H
