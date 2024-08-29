# Rocket-Launch-Simulation
This project simulates a rocket launch sequence with a countdown timer, demonstrating fundamental concepts in C++ such as classes, member functions, and time delays.

#### Tools and Libraries:

- **C++ Standard Library:**
  - **`<iostream>`**: Used for standard input and output operations. Key functions include `std::cout` for displaying messages and `std::cin` for user input.
  - **`<thread>`**: Manages thread execution and introduces delays. Utilized here for countdown pauses with `std::this_thread::sleep_for()`.
  - **`<chrono>`**: Provides precise time duration handling. Used to specify countdown intervals with `std::chrono::seconds`.

- **Visual Studio:**
  - An IDE used for developing, debugging, and compiling C++ code. Streamlines project management and error handling.

#### Project Overview:

- **`main.cpp`**: Contains the entry point (`main()` function) where user input is handled and the `Rocket` object is instantiated and launched.
- **`countdown.cpp`**: Defines the `Rocket` class with methods for initializing the rocket and executing the countdown sequence.

#### Instructions:

1. **Build**: Compile the project using Visual Studio. Ensure `main.cpp` and `countdown.cpp` are included.
2. **Execute**: Run the compiled program. Input the rocket’s name and countdown duration when prompted to see the countdown and launch sequence.

This project provides practice with C++ class design, time management, and user interaction. It's a foundational example that can be expanded with more complex features and functionality.

---

This description assumes familiarity with intermediate concepts while providing enough detail to understand the project and its components.
