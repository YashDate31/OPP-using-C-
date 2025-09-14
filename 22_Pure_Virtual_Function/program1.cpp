// * A pure virtual function makes a class abstract, so it cannot be instantiated.

#include <iostream>

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    // Provide implementation for the pure virtual function
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    // Shape s; // Error: cannot instantiate abstract class
    Circle c;
    c.draw();

    Shape* s_ptr = &c;
    s_ptr->draw();

    return 0;
}
