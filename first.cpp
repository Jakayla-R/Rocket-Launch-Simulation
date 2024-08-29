#include <iostream>  // Include input-output stream library 
#include <thread>    // Include threading support
#include <chrono>    // Include time utilities

// Function to perform the countdown
void countdown(int seconds) {
    for (int i = seconds; i >= 0; --i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Liftoff!\n";
}

int main() {
    int countdownTime;  // Declare the countdownTime variable

    // Prompt the user to enter the countdown time
    std::cout << "Rocket Launch Simulation\n";
    std::cout << "Enter the countdown time (in seconds): ";
    std::cin >> countdownTime;  // Get user input and store it in countdownTime

    // Start the countdown
    countdown(countdownTime);

    return 0;
}
