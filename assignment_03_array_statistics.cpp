// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int calculateSum(const int numbers[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    return sum;
}

double calculateAverage(const int numbers[], int n) {
    return static_cast<double>(calculateSum(numbers, n)) / n;
}

int calculateMaximum(const int numbers[], int n) {
    int maxValue = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }
    return maxValue;
}

int calculateMinimum(const int numbers[], int n) {
    int minValue = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }
    return minValue;
}

int main() {
    int n;
    int numbers[MAX_SIZE];

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    if (n > MAX_SIZE) {
        cout << "Error: N is too large." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum:     " << calculateSum(numbers, n) << endl;
    cout << "Average: " << calculateAverage(numbers, n) << endl;
    cout << "Maximum: " << calculateMaximum(numbers, n) << endl;
    cout << "Minimum: " << calculateMinimum(numbers, n) << endl;

    return 0;
}

