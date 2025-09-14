// * An abstract class with a pure virtual function and a normal function.

#include <iostream>

class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;

    // Normal function
    void sleep() {
        std::cout << "This animal is sleeping." << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();
    myDog.sleep();
    return 0;
}
