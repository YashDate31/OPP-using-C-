// * A class 'GrandChild' inherits from 'Child', which inherits from 'Parent'.
using namespace std;


#include <iostream>

// Base class
class Parent {
public:
    void parentFunc() {
        cout << "This is the parent." << endl;
    }
};

// Intermediate derived class
class Child : public Parent {
public:
    void childFunc() {
        cout << "This is the child." << endl;
    }
};

// Leaf derived class
class GrandChild : public Child {
public:
    void grandChildFunc() {
        cout << "This is the grandchild." << endl;
    }
};

int main() {
    GrandChild gc;
    gc.parentFunc();     // From Parent
    gc.childFunc();      // From Child
    gc.grandChildFunc(); // From GrandChild
    return 0;
}

