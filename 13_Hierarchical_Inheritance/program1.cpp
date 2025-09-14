// * Multiple classes ('Son', 'Daughter') inherit from a single base class ('Father').

#include <iostream>
#include <string>

// Base class
class Father {
public:
    std::string surname = "Smith";
    void displaySurname() {
        std::cout << "Surname: " << surname << std::endl;
    }
};

// Derived class 1
class Son : public Father {
public:
    std::string name = "John";
    void displayName() {
        std::cout << "Name: " << name << " ";
        displaySurname();
    }
};

// Derived class 2
class Daughter : public Father {
public:
    std::string name = "Jane";
    void displayName() {
        std::cout << "Name: " << name << " ";
        displaySurname();
    }
};

int main() {
    Son s;
    Daughter d;
    s.displayName();
    d.displayName();
    return 0;
}
