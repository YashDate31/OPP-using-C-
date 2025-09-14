// * A class 'Car' inherits from 'Vehicle' in single inheritance.
using namespace std;


#include <iostream>
#include <string>

class Vehicle { // Base class
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};

class Car : public Vehicle { // Derived class
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

