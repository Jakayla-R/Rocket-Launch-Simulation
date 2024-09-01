// trajectory.h
#ifndef TRAJECTORY_H
#define TRAJECTORY_H

class Trajectory {
public:
    Trajectory(double initialVelocity, double launchAngle, double gravity = 9.81);
    void calculateTrajectory(double timeStep, double totalTime);

private:
    double initialVelocity;  // Initial velocity in m/s
    double launchAngle;      // Launch angle in degrees
    double gravity;          // Acceleration due to gravity in m/s^2
};

#endif // TRAJECTORY_H

#pragma once
