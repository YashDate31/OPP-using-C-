// * Defines a Car class with its functions declared inside but defined outside.

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Function declaration
    void displayInfo();
};

// Function definition using the scope resolution operator ::
void Car::displayInfo() {
    cout << "Brand: " << brand << ", Year: " << year << endl;
}

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2021;
    myCar.displayInfo();

    return 0;
}
