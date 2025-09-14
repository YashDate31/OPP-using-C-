// * A virtual function allows a derived class to override a base class function.
using namespace std;


#include <iostream>

class Base {
public:
    virtual void print() { // Virtual function
        cout << "Print base class" << endl;
    }
};

class Derived : public Base {
public:
    void print() override { // Override the virtual function
        cout << "Print derived class" << endl;
    }
};

int main() {
    Base* base_ptr;
    Derived d;
    base_ptr = &d;

    // Virtual function, binded at runtime
    base_ptr->print(); // Calls the Derived class's print()

    return 0;
}

