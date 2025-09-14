// * Overloading the equality (==) operator using a friend function.

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
public:
    Person(std::string n) : name(n) {}
    friend bool operator==(const Person& p1, const Person& p2);
};

bool operator==(const Person& p1, const Person& p2) {
    return p1.name == p2.name;
}

int main() {
    Person person1("Alice");
    Person person2("Bob");
    Person person3("Alice");

    if (person1 == person2) {
        std::cout << "Person 1 and 2 are the same." << std::endl;
    } else {
        std::cout << "Person 1 and 2 are different." << std::endl;
    }

    if (person1 == person3) {
        std::cout << "Person 1 and 3 are the same." << std::endl;
    }

    return 0;
}
