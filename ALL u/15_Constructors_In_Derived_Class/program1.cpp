// * Shows how base and derived class constructors are called in order.
using namespace std;


#include <iostream>

class Base {
public:
    Base() {
        cout << "Base class constructor." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor." << endl;
    }
};

int main() {
    Derived d; // First Base() is called, then Derived()
    return 0;
}

