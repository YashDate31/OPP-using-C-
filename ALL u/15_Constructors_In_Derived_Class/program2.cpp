// * Passing arguments from the derived constructor to the base constructor.
using namespace std;


#include <iostream>

class Base {
protected:
    int value;
public:
    Base(int v) : value(v) {
        cout << "Base parameterized constructor. Value: " << value << endl;
    }
};

class Derived : public Base {
public:
    // 'Derived(int v)' calls 'Base(v)'
    Derived(int v) : Base(v) {
        cout << "Derived constructor." << endl;
    }
};

int main() {
    Derived d(100);
    return 0;
}

