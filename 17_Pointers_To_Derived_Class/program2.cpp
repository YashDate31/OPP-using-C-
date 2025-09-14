// * Using a base class pointer to call a virtual function.

#include <iostream>

class Animal {
public:
    virtual void makeSound() { // Virtual function
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Override the function
        std::cout << "Dog barks." << std::endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dogObj;

    animalPtr = &dogObj;

    // Calls the Dog's version of makeSound() because it's virtual
    animalPtr->makeSound();

    return 0;
}
