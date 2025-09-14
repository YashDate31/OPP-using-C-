// * Solves the "diamond problem" by ensuring the base class is inherited only once.

#include <iostream>

class Grandparent {
public:
    Grandparent() { std::cout << "Grandparent constructor" << std::endl; }
    void walk() { std::cout << "I can walk." << std::endl; }
};

// Use 'virtual' to prevent multiple copies of Grandparent
class Parent1 : virtual public Grandparent {
public:
    Parent1() { std::cout << "Parent1 constructor" << std::endl; }
};

// Use 'virtual' here as well
class Parent2 : virtual public Grandparent {
public:
    Parent2() { std::cout << "Parent2 constructor" << std::endl; }
};

class Child : public Parent1, public Parent2 {
public:
    Child() { std::cout << "Child constructor" << std::endl; }
};

int main() {
    Child c;
    c.walk(); // No ambiguity, only one 'walk' function exists.
    return 0;
}
