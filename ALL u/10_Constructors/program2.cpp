// * A class with a parameterized constructor to set initial values.
using namespace std;


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 30); // Constructor called with arguments
    p1.display();
    return 0;
}

