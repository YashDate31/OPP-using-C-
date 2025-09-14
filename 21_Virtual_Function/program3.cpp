// * Virtual destructors ensure the correct destructor is called for derived objects.
using namespace std;


#include <iostream>

class Base {
public:
    Base() { cout << "Base Constructor" << endl; }
    virtual ~Base() { // Virtual destructor
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor" << endl; }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Calls Derived destructor then Base destructor
    return 0;
}

