// * A derived class inherits from two base classes with functions.

#include <iostream>

class Base1 {
public:
    void func1() {
        std::cout << "Function from Base1" << std::endl;
    }
};

class Base2 {
public:
    void func2() {
        std::cout << "Function from Base2" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void derivedFunc() {
        std::cout << "Function from Derived" << std::endl;
    }
};

int main() {
    Derived d;
    d.func1(); // from Base1
    d.func2(); // from Base2
    d.derivedFunc(); // from Derived
    return 0;
}
