// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 8
// =============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int id;
    vector<double> scores;
};

double calculateAverage(const Student& student) {
    if (student.scores.empty()) {
        return 0.0;
    }

    double total = 0.0;
    for (double score : student.scores) {
        total += score;
    }

    return total / student.scores.size();
}

void addStudent(vector<Student>& students) {
    Student student;

    cout << "Student name: ";
    getline(cin >> ws, student.name);
    cout << "Student ID: ";
    cin >> student.id;

    int count;
    cout << "How many scores? ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        double score;
        cout << "Enter score " << (i + 1) << ": ";
        cin >> score;
        student.scores.push_back(score);
    }

    students.push_back(student);
    cout << "Student \"" << student.name << "\" added successfully." << endl;
}

void displayAllStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students have been added yet." << endl;
        return;
    }

    cout << left << setw(20) << "Name" << setw(10) << "ID" << "Scores" << "Average" << endl;
    cout << string(60, '-') << endl;

    for (const Student& student : students) {
        cout << left << setw(20) << student.name << setw(10) << student.id;
        for (size_t i = 0; i < student.scores.size(); i++) {
            cout << student.scores[i];
            if (i + 1 < student.scores.size()) {
                cout << ", ";
            }
        }
        cout << "\t" << fixed << setprecision(2) << calculateAverage(student) << endl;
    }
}

void calculateAverageForStudent(const vector<Student>& students) {
    int id;
    cout << "Enter student ID: ";
    cin >> id;

    for (const Student& student : students) {
        if (student.id == id) {
            cout << student.name << "'s average score: " << fixed << setprecision(2) << calculateAverage(student) << endl;
            return;
        }
    }

    cout << "Error: Student ID not found." << endl;
}

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "\n===============================" << endl;
        cout << "   STUDENT RECORD SYSTEM MENU" << endl;
        cout << "===============================" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Calculate average score" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice == 1) {
            addStudent(students);
        } else if (choice == 2) {
            displayAllStudents(students);
        } else if (choice == 3) {
            calculateAverageForStudent(students);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

