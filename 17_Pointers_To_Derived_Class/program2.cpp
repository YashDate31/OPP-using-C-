// * Using a base class pointer to call a virtual function.
using namespace std;


#include <iostream>

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Override the function
        cout << "Dog barks." << endl;
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

