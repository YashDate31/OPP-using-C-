// * Multiple classes ('Son', 'Daughter') inherit from a single base class ('Father').
using namespace std;


#include <iostream>
#include <string>

// Base class
class Father {
public:
    string surname = "Smith";
    void displaySurname() {
        cout << "Surname: " << surname << endl;
    }
};

// Derived class 1
class Son : public Father {
public:
    string name = "John";
    void displayName() {
        cout << "Name: " << name << " ";
        displaySurname();
    }
};

// Derived class 2
class Daughter : public Father {
public:
    string name = "Jane";
    void displayName() {
        cout << "Name: " << name << " ";
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

