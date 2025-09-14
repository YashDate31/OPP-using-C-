#include<conio.h>
#include<iostream.h>

class Employee {
protected:
    char name[20];
    int code;
public:
    void acceptEmployee() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Code: ";
        cin >> code;
    }
    void displayEmployee() {
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Code: " << code;
    }
};

// Virtual base classes to avoid ambiguity
class Account : virtual public Employee {
protected:
    float basicPay;
public:
    void acceptAccount() {
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }
    void displayAccount() {
        cout << "\nBasic Pay: " << basicPay;
    }
};

class Admin : virtual public Employee {
protected:
    int experience;
public:
    void acceptAdmin() {
        cout << "Enter Experience (in years): ";
        cin >> experience;
    }
    void displayAdmin() {
        cout << "\nExperience: " << experience << " years";
    }
};

class GrossSalary : public Account, public Admin {
    float grossSalary;
public:
    void calculateGross() {
        grossSalary = basicPay + (experience * 1000); // simple formula
    }
    void displayGross() {
        cout << "\nGross Salary: " << grossSalary;
    }
};

void main() {
    clrscr();
    GrossSalary emp;

    // Accept data
    emp.acceptEmployee();
    emp.acceptAccount();
    emp.acceptAdmin();

    // Calculate gross salary
    emp.calculateGross();

    // Display data
    cout << "\n-------- Employee Details --------";
    emp.displayEmployee();
    emp.displayAccount();
    emp.displayAdmin();
    emp.displayGross();

    getch();
}

/* 
Sample Output:

Enter Employee Name: Yash
Enter Employee Code: 101
Enter Basic Pay: 50000
Enter Experience (in years): 5

-------- Employee Details --------
Employee Name: Yash
Employee Code: 101
Basic Pay: 50000
Experience: 5 years
Gross Salary: 55000
*/
