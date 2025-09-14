// * Demonstrates runtime polymorphism with different shapes.
using namespace std;


#include <iostream>

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shape_ptr;
    Circle c;
    Square s;

    shape_ptr = &c;
    shape_ptr->draw(); // Calls Circle's draw()

    shape_ptr = &s;
    shape_ptr->draw(); // Calls Square's draw()

    return 0;
}

