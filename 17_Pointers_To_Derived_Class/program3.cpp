// * A pointer to a derived class in a multilevel inheritance chain.

#include <iostream>

class A {
public:
    void funcA() { std::cout << "Func A" << std::endl; }
};

class B : public A {
public:
    void funcB() { std::cout << "Func B" << std::endl; }
};

class C : public B {
public:
    void funcC() { std::cout << "Func C" << std::endl; }
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
