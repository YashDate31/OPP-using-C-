// * Derived class constructor calls base constructor and initializes its own members.
using namespace std;


#include <iostream>
#include <string>

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
};

class Student : public Person {
private:
    int studentID;
public:
    // Call Person's constructor and initialize studentID
    Student(string n, int id) : Person(n), studentID(id) {}

    void display() {
        cout << "Name: " << name << ", Student ID: " << studentID << endl;
    }
};

int main() {
    Student s("David", 555);
    s.display();
    return 0;
}

