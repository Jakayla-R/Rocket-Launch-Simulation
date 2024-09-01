// ignition_sequence.h
#ifndef IGNITIONSEQUENCEH
#define IGNITIONSEQUENCEH

#include <iostream>
#include <thread>
#include <chrono>

class IgnitionSequence {
public:
    IgnitionSequence();
    void runSequence();

private:
    void checkSystems();
    void igniteEngine();
    void buildThrust();
};

#endif // IGNITIONSEQUENCEH
#pragma once
