// * Calculating area of different shapes using an overloaded function.

#include <iostream>

class Geometry {
public:
    // Area of a square
    int area(int side) {
        return side * side;
    }
    // Area of a rectangle
    int area(int length, int width) {
        return length * width;
    }
    // Area of a circle
    float area(float radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Geometry g;
    std::cout << "Area of square: " << g.area(5) << std::endl;
    std::cout << "Area of rectangle: " << g.area(5, 10) << std::endl;
    std::cout << "Area of circle: " << g.area(2.5f) << std::endl;
    return 0;
}
