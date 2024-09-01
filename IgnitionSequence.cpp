// IgnitionSequence.cpp
#include "IgnitionSequence.h"

IgnitionSequence::IgnitionSequence() {
    // Constructor
}

void IgnitionSequence::runSequence() {
    std::cout << "Starting ignition sequence...\n";
    checkSystems();
    igniteEngine();
    buildThrust();
}

void IgnitionSequence::checkSystems() {
    std::cout << "Performing system checks...\n";
    // Simulate a delay for system checks
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Systems check complete. All systems are operational.\n";
}

void IgnitionSequence::igniteEngine() {
    std::cout << "Igniting engine...\n";
    // Simulate a delay for engine ignition
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Engine ignition successful.\n";
}

void IgnitionSequence::buildThrust() {
    std::cout << "Building thrust...\n";
    // Simulate a delay for thrust build-up
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "Thrust build-up complete. Rocket is ready for launch.\n";
}
