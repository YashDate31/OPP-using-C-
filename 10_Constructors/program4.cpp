// * A class with multiple constructors (constructor overloading).

#include <iostream>
#include <string>

class Box {
private:
    double length;
    double width;
    double height;
public:
    // Default constructor
    Box() : length(1.0), width(1.0), height(1.0) {
        std::cout << "Default constructor." << std::endl;
    }

    // Parameterized constructor for a cube
    Box(double side) : length(side), width(side), height(side) {
        std::cout << "Cube constructor." << std::endl;
    }

    // Parameterized constructor for a box
    Box(double l, double w, double h) : length(l), width(w), height(h) {
        std::cout << "Box constructor." << std::endl;
    }

    double volume() {
        return length * width * height;
    }
};

int main() {
    Box b1;          // Default
    Box b2(5.0);     // Cube
    Box b3(2.0, 3.0, 4.0); // Box

    std::cout << "Volume of b1: " << b1.volume() << std::endl;
    std::cout << "Volume of b2: " << b2.volume() << std::endl;
    std::cout << "Volume of b3: " << b3.volume() << std::endl;

    return 0;
}
