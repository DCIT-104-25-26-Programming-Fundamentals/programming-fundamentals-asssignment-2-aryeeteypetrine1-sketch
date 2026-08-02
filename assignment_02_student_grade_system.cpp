// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 2
// =============================================================================

using namespace std;
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

char getGrade(int score) {
    if (score < 0 || score > 100) {
        return '\0';
    } else if (score >= 80) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 60) {
        return 'C';
    } else if (score >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;

    cout << "Enter student score (0-100): ";
    cin >> score;

    char grade = getGrade(score);

    if (grade == '\0') {
        cout << "Error: Score must be between 0 and 100." << endl;
    } else {
        cout << "Grade: " << grade << endl;
    }

    return 0;
}

