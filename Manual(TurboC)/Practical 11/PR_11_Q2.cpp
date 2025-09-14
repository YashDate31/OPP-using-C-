#include <iostream.h>
#include <conio.h>

// Base class Employee
class Employee {
public:
    int empno;             // employee number
    char empname[30];      // employee name
    char designation[20];  // employee designation

    void getData() {
        cout << "Enter Employee Number: ";
        cin >> empno;
        cout << "Enter Employee Name: ";
        cin >> empname;
        cout << "Enter Employee Designation: ";
        cin >> designation;
    }

    void showData() {
        cout << "Employee Number: " << empno << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Designation: " << designation << endl;
    }
};

// Derived class Salary from Employee
class Salary : public Employee {
public:
    float basic, hra, da, gross;

    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;

        gross = basic + hra + da;   // calculate gross salary
    }

    void showSalary() {
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

void main() {
    clrscr();

    Salary s;   // object of derived class

    cout << "Enter Employee Details:\n";
    s.getData();
    s.getSalary();

    cout << "\nEmployee Details:\n";
    s.showData();
    s.showSalary();

    getch();
}

/*
================= OUTPUT =================

Enter Employee Details:
Enter Employee Number: 101
Enter Employee Name: Rahul
Enter Employee Designation: Manager
Enter Basic Salary: 20000
Enter HRA: 5000
Enter DA: 4000

Employee Details:
Employee Number: 101
Employee Name: Rahul
Designation: Manager
Basic: 20000
HRA: 5000
DA: 4000
Gross Salary: 29000
*/
