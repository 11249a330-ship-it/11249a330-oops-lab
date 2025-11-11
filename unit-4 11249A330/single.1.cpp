#include <iostream>
using namespace std;

class Base {
private:
    int a; // not inherited
protected:
    int b;
public:
    int c;

    void getData() {
        a = 10;
        b = 20;
        c = 30;
    }

    void showBase() {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

// Public Inheritance
class Derived : public Base {
public:
    void showDerived() {
        // a is not accessible (private)
        cout << "b = " << b << ", c = " << c << endl;
    }
};

int main() {
    Derived d;
    d.getData();
    d.showBase();
    d.showDerived();

    // d.c is accessible because it's public
    cout << "Accessing c directly from main: " << d.c << endl;

    return 0;
}
