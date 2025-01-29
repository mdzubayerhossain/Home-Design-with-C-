#include <iostream>

int main() {
    // Roof of the house
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 20 - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Walls of the house
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 17; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || i == 5) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // Base of the house
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 17; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 7; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
