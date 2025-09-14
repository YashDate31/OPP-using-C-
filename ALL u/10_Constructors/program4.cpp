// * A class with multiple constructors (constructor overloading).
using namespace std;


#include <iostream>
#include <string>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    // Default constructor
    Box() : length(1.0), width(1.0), height(1.0) {
        cout << "Default constructor." << endl;
    }

    // Parameterized constructor for a cube
    Box(double side) : length(side), width(side), height(side) {
        cout << "Cube constructor." << endl;
    }

    // Parameterized constructor for a box
    Box(double l, double w, double h) : length(l), width(w), height(h) {
        cout << "Box constructor." << endl;
    }

    double volume() {
        return length * width * height;
    }
};

int main() {
    Box b1;          // Default
    Box b2(5.0);     // Cube
    Box b3(2.0, 3.0, 4.0); // Box

    cout << "Volume of b1: " << b1.volume() << endl;
    cout << "Volume of b2: " << b2.volume() << endl;
    cout << "Volume of b3: " << b3.volume() << endl;

    return 0;
}

