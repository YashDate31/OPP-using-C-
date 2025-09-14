// * A pointer to a derived class in a multilevel inheritance chain.
using namespace std;


#include <iostream>

class A {
public:
    void funcA() { cout << "Func A" << endl; }
};

class B : public A {
public:
    void funcB() { cout << "Func B" << endl; }
};

class C : public B {
public:
    void funcC() { cout << "Func C" << endl; }
};

int main() {
    A* ptrA;
    C objC;

    ptrA = &objC; // Base pointer (A) points to most derived object (C)

    ptrA->funcA();
    // ptrA->funcB(); // Error
    // ptrA->funcC(); // Error

    B* ptrB = &objC; // Intermediate pointer (B) points to derived (C)
    ptrB->funcA();
    ptrB->funcB();
    // ptrB->funcC(); // Error

    return 0;
}

