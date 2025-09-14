// * A simple example of single inheritance with a base and derived class.
using namespace std;


#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Accessing base class function
    myDog.bark(); // Accessing derived class function
    return 0;
}

