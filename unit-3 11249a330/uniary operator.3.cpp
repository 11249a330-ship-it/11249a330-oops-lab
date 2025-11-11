#include <iostream>
using namespace std;

class Sample {
private:
    int a, b;

public:
    // Function to get input
    void get_data() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // Display function
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    // Overload unary minus (-) operator
    void operator-() {
        a = -a;
        b = -b;
    }
};

int main() {
    Sample s;

    s.get_data();
    cout << "Before overloading: ";
    s.display();

    // Using overloaded unary minus
    -s;  // same as s.operator-();

    cout << "After overloading: ";
    s.display();

    return 0;
}

