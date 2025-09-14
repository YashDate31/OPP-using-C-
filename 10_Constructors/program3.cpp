// * A class with a copy constructor to initialize an object from another object.

#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int x1, int y1) { x = x1; y = y1; }

    // Copy constructor
    Point(const Point &p2) {
        x = p2.x;
        y = p2.y;
        std::cout << "Copy constructor called." << std::endl;
    }

    int getX() { return x; }
    int getY() { return y; }
};

int main() {
    Point p1(10, 15); // Normal constructor
    Point p2 = p1;    // Copy constructor called here

    std::cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << std::endl;
    std::cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << std::endl;

    return 0;
}
