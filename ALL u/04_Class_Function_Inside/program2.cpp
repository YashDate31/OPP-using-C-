// * Creates a Rectangle class that calculates its area with a function inside.
using namespace std;


#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    // Member function defined inside the class
    float calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 10.5;
    rect.width = 4.0;

    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}

