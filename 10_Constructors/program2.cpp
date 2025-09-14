// * A class with a parameterized constructor to set initial values.

#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // Parameterized constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
        std::cout << "Parameterized constructor called for " << name << std::endl;
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1("Alice", 30); // Constructor called with arguments
    p1.display();
    return 0;
}
