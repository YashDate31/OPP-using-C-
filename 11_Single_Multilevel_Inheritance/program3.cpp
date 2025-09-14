// * A class 'GrandChild' inherits from 'Child', which inherits from 'Parent'.

#include <iostream>

// Base class
class Parent {
public:
    void parentFunc() {
        std::cout << "This is the parent." << std::endl;
    }
};

// Intermediate derived class
class Child : public Parent {
public:
    void childFunc() {
        std::cout << "This is the child." << std::endl;
    }
};

// Leaf derived class
class GrandChild : public Child {
public:
    void grandChildFunc() {
        std::cout << "This is the grandchild." << std::endl;
    }
};

int main() {
    GrandChild gc;
    gc.parentFunc();     // From Parent
    gc.childFunc();      // From Child
    gc.grandChildFunc(); // From GrandChild
    return 0;
}
