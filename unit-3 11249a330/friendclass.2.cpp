#include <iostream>
using namespace std;

class Sample {
private:
    int num1, num2;

public:
    // Function to get input
    void get_data() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    // Declare friend function
    friend int add(Sample s);
};

// Friend function definition
int add(Sample s) {
    // Can access private data members num1 and num2
    return s.num1 + s.num2;
}

int main() {
    Sample s;
    s.get_data();
    cout << "Sum = " << add(s);
}
