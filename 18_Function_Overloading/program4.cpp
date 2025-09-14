// * Calculating area of different shapes using an overloaded function.
using namespace std;


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
    cout << "Area of square: " << g.area(5) << endl;
    cout << "Area of rectangle: " << g.area(5, 10) << endl;
    cout << "Area of circle: " << g.area(2.5f) << endl;
    return 0;
}

