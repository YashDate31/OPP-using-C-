// * Passing arguments from the derived constructor to the base constructor.

#include <iostream>

class Base {
protected:
    int value;
public:
    Base(int v) : value(v) {
        std::cout << "Base parameterized constructor. Value: " << value << std::endl;
    }
};

class Derived : public Base {
public:
    // 'Derived(int v)' calls 'Base(v)'
    Derived(int v) : Base(v) {
        std::cout << "Derived constructor." << std::endl;
    }
};

int main() {
    Derived d(100);
    return 0;
}
