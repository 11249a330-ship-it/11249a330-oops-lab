#include <iostream>
using namespace std;

class Sample {
private:
    int a, b;

public:
    // Function to get input
    void get_data() {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }

    // Display function
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    // Overload + operator (binary operator)
    Sample operator+(Sample s) {
        Sample temp;
        temp.a = a + s.a;
        temp.b = b + s.b;
        return temp;
    }
};

int main() {
    Sample s1, s2, s3;

    cout << "Enter data for first object:\n";
    s1.get_data();

    cout << "Enter data for second object:\n";
    s2.get_data();

    // Using overloaded + operator
    s3 = s1 + s2;  // same as s3 = s1.operator+(s2);

    cout << "\nResult after addition:\n";
    s3.display();

    return 0;
}
