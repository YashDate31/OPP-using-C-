// * Demonstrates runtime polymorphism with different shapes.

#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a generic shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
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
