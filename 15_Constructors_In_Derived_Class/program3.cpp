// * Derived class constructor calls base constructor and initializes its own members.

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
public:
    Person(std::string n) : name(n) {}
};

class Student : public Person {
private:
    int studentID;
public:
    // Call Person's constructor and initialize studentID
    Student(std::string n, int id) : Person(n), studentID(id) {}

    void display() {
        std::cout << "Name: " << name << ", Student ID: " << studentID << std::endl;
    }
};

int main() {
    Student s("David", 555);
    s.display();
    return 0;
}
