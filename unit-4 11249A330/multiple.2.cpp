#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    void displayA() {
        cout << "Display from class A" << endl;
    }
};

// Base class 2
class B {
public:
    void displayB() {
        cout << "Display from class B" << endl;
    }
};

// Derived class inherits from both A and B
class C : public A, public B {
public:
    void displayC() {
        cout << "Display from class C" << endl;
    }
};

int main() {
    C obj;

    obj.displayA();  // Access function from class A
    obj.displayB();  // Access function from class B
    obj.displayC();  // Access function from class C

    return 0;
}
