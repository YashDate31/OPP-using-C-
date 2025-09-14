// * Using virtual base class in a student-person context.

#include <iostream>

class Person {
protected:
    int id;
public:
    Person(int i) : id(i) { std::cout << "Person constructor" << std::endl; }
};

class Student : virtual public Person {
public:
    Student(int i) : Person(i) { std::cout << "Student constructor" << std::endl; }
};

class Employee : virtual public Person {
public:
    Employee(int i) : Person(i) { std::cout << "Employee constructor" << std::endl; }
};

class Intern : public Student, public Employee {
public:
    // The most derived class is responsible for constructing the virtual base
    Intern(int i) : Person(i), Student(i), Employee(i) {
        std::cout << "Intern constructor" << std::endl;
    }
    void showId() { std::cout << "My ID is: " << id << std::endl; }
};

int main() {
    Intern i(123);
    i.showId();
    return 0;
}
