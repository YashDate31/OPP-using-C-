// * Virtual functions in a multilevel inheritance scenario.
using namespace std;


#include <iostream>

class Grandparent {
public:
    virtual void sayHi() { cout << "Hi from Grandparent." << endl; }
};

class Parent : public Grandparent {
public:
    void sayHi() override { cout << "Hi from Parent." << endl; }
};

class Child : public Parent {
public:
    void sayHi() override { cout << "Hi from Child." << endl; }
};

int main() {
    Grandparent* ptr;
    Child c;
    ptr = &c;

    // Calls the most derived version of the function (Child's)
    ptr->sayHi();

    return 0;
}

