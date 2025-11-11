#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;

    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    // Shape s; 
    Shape* shapePtr; 

    Circle c(5);
    Rectangle r(4, 6);

    shapePtr = &c;
    shapePtr->area(); 

    shapePtr = &r;
    shapePtr->area(); 

    return 0;
}
