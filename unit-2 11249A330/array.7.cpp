#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s[3];  // Array of 3 Student objects

    cout << "Enter details of 3 students:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
