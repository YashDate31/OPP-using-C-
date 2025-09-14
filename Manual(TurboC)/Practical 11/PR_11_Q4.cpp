#include <iostream.h>
#include <conio.h>

// Base class Person
class Person {
public:
    char name[30];
    char gender[10];
    int age;

    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Gender: ";
        cin >> gender;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Employee from Person
class Employee : public Person {
public:
    int empid;
    char company[30];
    float salary;

    void getEmployeeData() {
        getPersonData();
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Company Name: ";
        cin >> company;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void showEmployeeData() {
        showPersonData();
        cout << "Employee ID: " << empid << endl;
        cout << "Company: " << company << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class Programmer from Employee
class Programmer : public Employee {
public:
    int no_of_languages;

    void getProgrammerData() {
        getEmployeeData();
        cout << "Enter number of programming languages known: ";
        cin >> no_of_languages;
    }

    void showProgrammerData() {
        showEmployeeData();
        cout << "Programming Languages Known: " << no_of_languages << endl;
    }
};

void main() {
    clrscr();

    Programmer p;   // object of derived class

    cout << "Enter Programmer Details:\n";
    p.getProgrammerData();

    cout << "\nProgrammer Details:\n";
    p.showProgrammerData();

    getch();
}

/*
================= OUTPUT =================

Enter Programmer Details:
Enter Name: Rohan
Enter Gender: Male
Enter Age: 25
Enter Employee ID: 101
Enter Company Name: Infosys
Enter Salary: 50000
Enter number of programming languages known: 4

Programmer Details:
Name: Rohan
Gender: Male
Age: 25
Employee ID: 101
Company: Infosys
Salary: 50000
Programming Languages Known: 4
*/
