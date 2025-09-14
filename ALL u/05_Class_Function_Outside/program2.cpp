// * A Circle class that calculates area and circumference with external functions.
using namespace std;


#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    // Setter for the radius
    void setRadius(float r);

    // Function declarations
    float getArea();
    float getCircumference();
};

void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getArea() {
    return 3.14159 * radius * radius;
}

float Circle::getCircumference() {
    return 2 * 3.14159 * radius;
}

int main() {
    Circle c;
    c.setRadius(5.0);

    cout << "Area: " << c.getArea() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}

