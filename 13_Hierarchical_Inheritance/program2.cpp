// * 'Cat' and 'Dog' both inherit from the 'Animal' base class.
using namespace std;


#include <iostream>

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
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

