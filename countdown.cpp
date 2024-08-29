#include <iostream>
#include <thread>
#include <chrono>

class Rocket {
public:
    // Constructor for Rocket class
    Rocket(std::string name, int countdownTime) : name(name), countdownTime(countdownTime) {}

    // Method to initiate the launch
    void launch() {
        std::cout << name << " launch sequence initiated.\n";
        countdown(countdownTime);
    }

private:
    // Private member variables
    std::string name;
    int countdownTime;

    // Private method for countdown
    void countdown(int seconds) {
        for (int i = seconds; i >= 0; --i) {
            std::cout << i << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "Liftoff!\n";
    }
};
