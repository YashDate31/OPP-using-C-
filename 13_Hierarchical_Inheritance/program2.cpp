// * 'Cat' and 'Dog' both inherit from the 'Animal' base class.

#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat meows." << std::endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;
    myDog.eat();
    myDog.bark();
    myCat.eat();
    myCat.meow();
    return 0;
}
