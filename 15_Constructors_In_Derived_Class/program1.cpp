// * Shows how base and derived class constructors are called in order.

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base class constructor." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor." << std::endl;
    }
};

int main() {
    Derived d; // First Base() is called, then Derived()
    return 0;
}
