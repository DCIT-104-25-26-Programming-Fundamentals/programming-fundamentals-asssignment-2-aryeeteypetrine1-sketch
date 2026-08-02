// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 10;

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(6) << matrix[i][j];
        }
        cout << endl;
    }
}

void transposeMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void addMatrices(const int a[MAX_SIZE][MAX_SIZE], const int b[MAX_SIZE][MAX_SIZE], int rows, int cols, int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(const int a[MAX_SIZE][MAX_SIZE], const int b[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int rowsB, int colsB, int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\nMatrix Operations Menu" << endl;
        cout << "1. Transpose a matrix" << endl;
        cout << "2. Add two matrices" << endl;
        cout << "3. Multiply two matrices" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice == 1) {
            int rows, cols;
            int matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];

            cout << "Enter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;

            readMatrix(matrix, rows, cols);
            transposeMatrix(matrix, rows, cols, transpose);

            cout << "\nOriginal Matrix:" << endl;
            displayMatrix(matrix, rows, cols);
            cout << "\nTransposed Matrix:" << endl;
            displayMatrix(transpose, cols, rows);
        } else if (choice == 2) {
            int rows, cols;
            int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

            cout << "Enter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;

            cout << "Enter matrix A:" << endl;
            readMatrix(a, rows, cols);
            cout << "Enter matrix B:" << endl;
            readMatrix(b, rows, cols);
            addMatrices(a, b, rows, cols, result);

            cout << "\nResult Matrix:" << endl;
            displayMatrix(result, rows, cols);
        } else if (choice == 3) {
            int rowsA, colsA, rowsB, colsB;
            int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

            cout << "Enter number of rows for matrix A: ";
            cin >> rowsA;
            cout << "Enter number of columns for matrix A: ";
            cin >> colsA;
            cout << "Enter number of rows for matrix B: ";
            cin >> rowsB;
            cout << "Enter number of columns for matrix B: ";
            cin >> colsB;

            if (colsA != rowsB) {
                cout << "Error: Number of columns in A must equal number of rows in B." << endl;
                continue;
            }

            cout << "Enter matrix A:" << endl;
            readMatrix(a, rowsA, colsA);
            cout << "Enter matrix B:" << endl;
            readMatrix(b, rowsB, colsB);
            multiplyMatrices(a, b, rowsA, colsA, rowsB, colsB, result);

            cout << "\nResult Matrix:" << endl;
            displayMatrix(result, rowsA, colsB);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

