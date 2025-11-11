#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(5, 10) << endl;
    cout << "Addition of doubles: " << add(2.5, 3.8) << endl;
    cout << "Addition of strings: " << add(string("Hello "), string("World")) << endl;

    return 0;
}
