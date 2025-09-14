#include <iostream.h>
#include <conio.h>

// Base class Employee
class Employee {
public:
    int emp_id;
    char emp_code[20];

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Code: ";
        cin >> emp_code;
    }

    // Virtual function
    virtual void display() {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Code: " << emp_code;
    }
};

// Derived class Programmer
class Programmer : public Employee {
public:
    char skill[30];

    void accept() {
        Employee::accept();
        cout << "Enter Programmer Skill: ";
        cin >> skill;
    }

    void display() {
        Employee::display();
        cout << "\nProgrammer Skill: " << skill;
    }
};

// Derived class Manager
class Manager : public Employee {
public:
    char department[30];

    void accept() {
        Employee::accept();
        cout << "Enter Manager Department: ";
        cin >> department;
    }

    void display() {
        Employee::display();
        cout << "\nManager Department: " << department;
    }
};

void main() {
    clrscr();

    // Programmer object
    Programmer p;
    cout << "\n--- Enter Programmer Details ---\n";
    p.accept();
    cout << "\n--- Displaying Programmer Details ---\n";
    p.display();

    // Manager object
    Manager m;
    cout << "\n\n--- Enter Manager Details ---\n";
    m.accept();
    cout << "\n--- Displaying Manager Details ---\n";
    m.display();

    getch();
}

/*
--------- OUTPUT ----------
--- Enter Programmer Details ---
Enter Employee ID: 101
Enter Employee Code: E101
Enter Programmer Skill: Java

--- Displaying Programmer Details ---
Employee ID: 101
Employee Code: E101
Programmer Skill: Java

--- Enter Manager Details ---
Enter Employee ID: 202
Enter Employee Code: M202
Enter Manager Department: HR

--- Displaying Manager Details ---
Employee ID: 202
Employee Code: M202
Manager Department: HR
-----------------------------------
*/
