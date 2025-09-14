// * Overloading the unary minus (-) operator using a friend function.

#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    void display() { std::cout << "(" << x << ", " << y << ")" << std::endl; }
    friend Point operator-(Point &p);
};

// Friend function definition
Point operator-(Point &p) {
    return Point(-p.x, -p.y);
}

int main() {
    Point p1(10, 20);
    Point p2;

    std::cout << "p1 is ";
    p1.display();

    p2 = -p1; // Calls the friend operator-()

    std::cout << "p2 is ";
    p2.display();

    return 0;
}
