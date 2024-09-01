#Rocket-Launch-Simulation

This project simulates a rocket launch sequence, showcasing fundamental concepts in C++ such as classes, member functions, and time delays. The simulation now includes advanced features like trajectory calculations, ignition sequences, and user-defined initial parameters to create a more realistic rocket launch experience.

Features
Countdown Timer: A fully simulated countdown that introduces time delays and engages users in the launch process.
 <br />Ignition Sequence: An added ignition phase that simulates the rocket's engine starting, enhancing the realism of the launch process.
 <br />Trajectory Calculation: Computes the rocket's altitude and distance over time based on user-defined initial values such as launch angle, velocity, and time steps.
 <br />Failure Scenarios: Simulates potential failures during launch, such as engine malfunctions or guidance system errors.
 <br />User-Defined Inputs: Allows users to input realistic initial values, such as launch angle, initial velocity, and simulation duration, for more customized and educational simulations.
 <br />Educational Mode: An interactive mode that explains the underlying physics and C++ concepts as the simulation runs.

Tools and Libraries
 <br />C++ Standard Library:
 <br /><iostream>: Handles standard input and output operations.
 <br /><thread>: Manages thread execution and introduces countdown pauses.
 <br /><chrono>: Provides precise time duration handling for countdown intervals.
 <br /><cmath>: Used for mathematical operations, particularly in trajectory calculations.

Visual Studio: An IDE for developing, debugging, and compiling C++ code. Simplifies project management and error handling.

Project Overview
 <br />main.cpp: The entry point of the program, where user input is handled, the Rocket object is instantiated, and the launch sequence is executed.
 <br />countdown.cpp: Defines the Rocket class with methods for initializing the rocket, managing the ignition sequence, and executing the countdown.
 <br />trajectory.cpp: Contains the Trajectory class that handles trajectory calculations based on user-defined initial values.
 <br />trajectory.h: The header file that declares the Trajectory class and its member functions.
 
Instructions
 <br />Build: Compile the project using Visual Studio. Ensure that main.cpp, countdown.cpp, and trajectory.cpp are included.
 <br />Execute: Run the compiled program. Input the rocket’s name, ignition sequence, initial velocity, launch angle, and countdown duration when prompted to observe the countdown, ignition, and launch sequence.
