// trajectory.cpp
#include "trajectory.h"
#include <iostream>
#include <cmath>


// Define M_PI if it's not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif





Trajectory::Trajectory(double initialVelocity, double launchAngle, double gravity)
    : initialVelocity(initialVelocity), launchAngle(launchAngle), gravity(gravity) {}

void Trajectory::calculateTrajectory(double timeStep, double totalTime) {
    double radianAngle = launchAngle * M_PI / 180.0;  // Convert angle to radians
    double time = 0.0;

    std::cout << "Time(s)\tAltitude(m)\tDistance(m)\n";
    while (time <= totalTime) {
        double altitude = initialVelocity * time * sin(radianAngle) - 0.5 * gravity * time * time;
        double distance = initialVelocity * time * cos(radianAngle);

        if (altitude < 0) {  // Stop if the rocket hits the ground
            altitude = 0;
        }

        std::cout << time << "\t" << altitude << "\t" << distance << "\n";
        time += timeStep;
    }
}
