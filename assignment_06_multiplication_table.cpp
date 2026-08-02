// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 6
// =============================================================================

#include <iostream>
using namespace std;

void printSingleTable(int number) {
    cout << "Multiplication Table for " << number << ":" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

void printTablesUpToN(int n) {
    for (int table = 1; table <= n; table++) {
        printSingleTable(table);
        if (table != n) {
            cout << "---------------------------" << endl;
        }
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\nMultiplication Table Menu" << endl;
        cout << "1. Print one table" << endl;
        cout << "2. Print tables from 1 to N" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 3) {
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice == 1) {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            if (number <= 0) {
                cout << "Error: N must be a positive integer." << endl;
            } else {
                printSingleTable(number);
            }
        } else if (choice == 2) {
            int n;
            cout << "Enter a number N: ";
            cin >> n;
            if (n <= 0) {
                cout << "Error: N must be a positive integer." << endl;
            } else {
                printTablesUpToN(n);
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

