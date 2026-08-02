// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================

#include <iostream>
using namespace std;

void printFirstNTerms(int n) {
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    int first = 0, second = 1;
    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << first;
        } else if (i == 1) {
            cout << " " << second;
        } else {
            int next = first + second;
            first = second;
            second = next;
            cout << " " << second;
        }
    }

    cout << endl;
}

bool isFibonacciNumber(int number) {
    if (number < 0) {
        return false;
    }

    if (number == 0 || number == 1) {
        return true;
    }

    int first = 0, second = 1;
    while (second < number) {
        int next = first + second;
        first = second;
        second = next;
    }

    return second == number;
}

int main() {
    int choice;

    while (true) {
        cout << "\nFibonacci Menu" << endl;
        cout << "1. Print first N terms" << endl;
        cout << "2. Check if a number is Fibonacci" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 3) {
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice == 1) {
            int n;
            cout << "How many terms? ";
            cin >> n;
            printFirstNTerms(n);
        } else if (choice == 2) {
            int number;
            cout << "Enter a number to check: ";
            cin >> number;

            if (isFibonacciNumber(number)) {
                cout << number << " is a Fibonacci number." << endl;
            } else {
                cout << number << " is NOT a Fibonacci number." << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

