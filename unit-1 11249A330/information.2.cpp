#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total, average;

public:
    // Function to input student details
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);
        cout << "Enter marks in 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    // Function to calculate total and average
    void calculate() {
        total = marks1 + marks2 + marks3;
        average = total / 3;
    }

    // Function to display student details
    void display() {
        cout << fixed << setprecision(2);
        cout << "\n------ STUDENT DETAILS ------\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Average     : " << average << endl;

        if (average >= 60)
            cout << "Result      : First Class" << endl;
        else if (average >= 45)
            cout << "Result      : Second Class" << endl;
        else if (average >= 33)
            cout << "Result      : Pass" << endl;
        else
            cout << "Result      : Fail" << endl;

        cout << "-----------------------------\n";
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}
