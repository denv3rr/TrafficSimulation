// include/Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
    Vehicle(float x, float y);
    void update(float deltaTime);
    void render();

private:
    float x, y;  // vehicle position
    float speed; // vehicle speed
};

#endif // VEHICLE_H