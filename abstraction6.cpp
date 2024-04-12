#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Concrete class implementing the Shape interface
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Concrete class implementing the Shape interface
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    // Creating objects of concrete classes
    Circle circle;
    Square square;

    // Using the draw() method through the Shape interface
    Shape *shape1 = &circle;
    Shape *shape2 = &square;

    shape1->draw();
    shape2->draw();

    return 0;
}

