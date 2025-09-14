// * Demonstrates how the virtual base class constructor is called only once.

#include <iostream>

class A {
public:
    int a_data;
    A() { a_data = 10; std::cout << "A's constructor" << std::endl; }
};

class B : virtual public A {
public:
    B() { std::cout << "B's constructor" << std::endl; }
};

class C : virtual public A {
public:
    C() { std::cout << "C's constructor" << std::endl; }
};

class D : public B, public C {
public:
    D() { std::cout << "D's constructor" << std::endl; }
    void show() {
        // No ambiguity in accessing a_data
        std::cout << "a_data is " << a_data << std::endl;
    }
};

int main() {
    D obj;
    obj.show();
    return 0;
}
