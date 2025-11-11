#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal can eat." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal can walk." << endl;
    }
};

// Derived class from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog can bark." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.walk();  // Inherited from Mammal
    d.bark();  // From Dog

    return 0;
}
