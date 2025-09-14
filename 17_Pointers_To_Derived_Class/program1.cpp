// * A base class pointer can point to a derived class object.

#include <iostream>

class Base {
public:
    void baseFunc() {
        std::cout << "Function from Base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void derivedFunc() {
        std::cout << "Function from Derived class." << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj; // Base pointer points to Derived object

    // Can call Base class functions
    basePtr->baseFunc();

    // Cannot call Derived class functions directly with base pointer
    // basePtr->derivedFunc(); // This would cause a compile error

    return 0;
}
