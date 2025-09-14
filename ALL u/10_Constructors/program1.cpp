// * A class with a default constructor that initializes values.
using namespace std;


#include <iostream>
using namespace std;

class Cube {
private:
    int side;
public:
    // Default constructor
    Cube() {
        side = 10;
        cout << "Default constructor called. Side set to " << side << endl;
    }

    int getVolume() {
        return side * side * side;
    }
};

int main() {
    Cube c1; // Default constructor is called automatically
    cout << "Volume of cube is: " << c1.getVolume() << endl;
    return 0;
}

