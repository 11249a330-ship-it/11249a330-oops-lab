#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int *ptr = &num;  // Pointer storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in pointer (address): " << ptr << endl;
    cout << "Value pointed by pointer: " << *ptr << endl; // Dereferencing

    // Changing value using pointer
    *ptr = 100;
    cout << "New value of num: " << num << endl;

    return 0;
}
