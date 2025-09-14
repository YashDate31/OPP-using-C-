// * Virtual destructors ensure the correct destructor is called for derived objects.

#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor" << std::endl; }
    virtual ~Base() { // Virtual destructor
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor" << std::endl; }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Calls Derived destructor then Base destructor
    return 0;
}
