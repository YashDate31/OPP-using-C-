// * Solves the "diamond problem" by ensuring the base class is inherited only once.
using namespace std;


#include <iostream>

class Grandparent {
public:
    Grandparent() { cout << "Grandparent constructor" << endl; }
    void walk() { cout << "I can walk." << endl; }
};

// Use 'virtual' to prevent multiple copies of Grandparent
class Parent1 : virtual public Grandparent {
public:
    Parent1() { cout << "Parent1 constructor" << endl; }
};

// Use 'virtual' here as well
class Parent2 : virtual public Grandparent {
public:
    Parent2() { cout << "Parent2 constructor" << endl; }
};

class Child : public Parent1, public Parent2 {
public:
    Child() { cout << "Child constructor" << endl; }
};

int main() {
    Child c;
    c.walk(); // No ambiguity, only one 'walk' function exists.
    return 0;
}

