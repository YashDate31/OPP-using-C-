// * Using virtual base class in a student-person context.
using namespace std;


#include <iostream>

class Person {
protected:
    int id;
public:
    Person(int i) : id(i) { cout << "Person constructor" << endl; }
};

class Student : virtual public Person {
public:
    Student(int i) : Person(i) { cout << "Student constructor" << endl; }
};

class Employee : virtual public Person {
public:
    Employee(int i) : Person(i) { cout << "Employee constructor" << endl; }
};

class Intern : public Student, public Employee {
public:
    // The most derived class is responsible for constructing the virtual base
    Intern(int i) : Person(i), Student(i), Employee(i) {
        cout << "Intern constructor" << endl;
    }
    void showId() { cout << "My ID is: " << id << endl; }
};

int main() {
    Intern i(123);
    i.showId();
    return 0;
}

