// * A class with a default constructor that initializes values.

#include <iostream>

class Cube {
private:
    int side;
public:
    // Default constructor
    Cube() {
        side = 10;
        std::cout << "Default constructor called. Side set to " << side << std::endl;
    }

    int getVolume() {
        return side * side * side;
    }
};

int main() {
    Cube c1; // Default constructor is called automatically
    std::cout << "Volume of cube is: " << c1.getVolume() << std::endl;
    return 0;
}
