// * A class 'Car' inherits from 'Vehicle' in single inheritance.

#include <iostream>
#include <string>

class Vehicle { // Base class
public:
    std::string brand = "Ford";
    void honk() {
        std::cout << "Tuut, tuut! \n";
    }
};

class Car : public Vehicle { // Derived class
public:
    std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand + " " + myCar.model;
    return 0;
}
