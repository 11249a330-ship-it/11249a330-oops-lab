#include <iostream>
using namespace std;

class sample {
private:
    int num1, num2;

public:
    // Function to get input
    void get_data() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    // Declare friend function
    friend int add(sample s);
};

// Friend function definition
int add(sample s) {
    return s.num1 + s.num2;
}

int main() {
    sample s;
    s.get_data();
    cout << "Sum = " << add(s) << endl;
    return 0;
}
