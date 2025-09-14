#include <iostream.h>
#include <conio.h>

// Base class Employee
class Employee {
public:
    int empid;         // employee ID
    char empname[30];  // employee name

    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Employee Name: ";
        cin >> empname;
    }

    void showEmployeeData() {
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Name: " << empname << endl;
    }
};

// Base class EmpUnion
class EmpUnion {
public:
    int unionid;   // union membership ID

    void getUnionData() {
        cout << "Enter Union ID: ";
        cin >> unionid;
    }

    void showUnionData() {
        cout << "Union ID: " << unionid << endl;
    }
};

// Derived class EmpFood from Employee and EmpUnion
class EmpFood : public Employee, public EmpUnion {
public:
    float basic_salary;   // basic salary

    void getFoodData() {
        getEmployeeData();  // from Employee
        getUnionData();     // from EmpUnion
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void showFoodData() {
        showEmployeeData();
        showUnionData();
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

void main() {
    clrscr();

    EmpFood e;   // object of derived class

    cout << "Enter Employee Food Scheme Details:\n";
    e.getFoodData();

    cout << "\nEmployee Food Scheme Details:\n";
    e.showFoodData();

    getch();
}

/*
================= OUTPUT =================

Enter Employee Food Scheme Details:
Enter Employee ID: 101
Enter Employee Name: Priya
Enter Union ID: 555
Enter Basic Salary: 25000

Employee Food Scheme Details:
Employee ID: 101
Employee Name: Priya
Union ID: 555
Basic Salary: 25000
*/
