// * A simple example of single inheritance with a base and derived class.

#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "I can bark!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Accessing base class function
    myDog.bark(); // Accessing derived class function
    return 0;
}
