// * An abstract class with a pure virtual function and a normal function.
using namespace std;


#include <iostream>

class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;

    // Normal function
    void sleep() {
        cout << "This animal is sleeping." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();
    myDog.sleep();
    return 0;
}

