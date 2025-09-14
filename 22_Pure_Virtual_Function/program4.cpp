// * A derived class must implement all pure virtual functions from its base.

#include <iostream>

class Base {
public:
    virtual void func1() = 0;
    virtual void func2() = 0;
};

// This class is also abstract because it only implements func1()
class Derived1 : public Base {
public:
    void func1() override {
        std::cout << "Derived1's func1" << std::endl;
    }
};

// This class is concrete because it implements both
class Derived2 : public Derived1 {
public:
    void func2() override {
        std::cout << "Derived2's func2" << std::endl;
    }
};

int main() {
    // Derived1 d1; // Error: abstract class
    Derived2 d2;
    d2.func1();
    d2.func2();
    return 0;
}
