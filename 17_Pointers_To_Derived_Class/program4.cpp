// * Virtual functions in a multilevel inheritance scenario.

#include <iostream>

class Grandparent {
public:
    virtual void sayHi() { std::cout << "Hi from Grandparent." << std::endl; }
};

class Parent : public Grandparent {
public:
    void sayHi() override { std::cout << "Hi from Parent." << std::endl; }
};

class Child : public Parent {
public:
    void sayHi() override { std::cout << "Hi from Child." << std::endl; }
};

int main() {
    Grandparent* ptr;
    Child c;
    ptr = &c;

    // Calls the most derived version of the function (Child's)
    ptr->sayHi();

    return 0;
}
