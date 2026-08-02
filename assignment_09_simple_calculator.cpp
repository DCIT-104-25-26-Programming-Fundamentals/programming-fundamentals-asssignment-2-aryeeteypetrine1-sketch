// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

long long add(long long a, long long b) {
    return a + b;
}

long long subtract(long long a, long long b) {
    return a - b;
}

long long multiply(long long a, long long b) {
    return a * b;
}

double divide(long long a, long long b) {
    return static_cast<double>(a) / b;
}

long long modulus(long long a, long long b) {
    return a % b;
}

long long power(long long base, long long exponent) {
    long long result = 1;
    for (long long i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int choice;

    while (true) {
        cout << "\n============================" << endl;
        cout << "      SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        }

        long long a, b;
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        if (choice == 1) {
            cout << "Result: " << a << " + " << b << " = " << add(a, b) << endl;
        } else if (choice == 2) {
            cout << "Result: " << a << " - " << b << " = " << subtract(a, b) << endl;
        } else if (choice == 3) {
            cout << "Result: " << a << " * " << b << " = " << multiply(a, b) << endl;
        } else if (choice == 4) {
            if (b == 0) {
                cout << "Error: Cannot divide by zero." << endl;
            } else {
                cout << fixed << setprecision(2);
                cout << "Result: " << a << " / " << b << " = " << divide(a, b) << endl;
            }
        } else if (choice == 5) {
            if (b == 0) {
                cout << "Error: Cannot divide by zero." << endl;
            } else {
                cout << "Result: " << a << " % " << b << " = " << modulus(a, b) << endl;
            }
        } else if (choice == 6) {
            if (b < 0) {
                cout << "Error: Exponent must be non-negative." << endl;
            } else {
                cout << "Result: " << a << " ^ " << b << " = " << power(a, b) << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

