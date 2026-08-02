// =============================================================================
// PROGRAMMING FUNDAMENTALS - Assignment 1
// =============================================================================

#include <iostream>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is NOT a prime number." << std::endl;
    }

    return 0;
}


bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is NOT a prime number." << std::endl;
    }

    return 0;
}


