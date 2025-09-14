#include <iostream.h>
#include <conio.h>

class Staff {
    int code;
public:
    void getdata() {
        cout << "\nEnter Staff Code: ";
        cin >> code;
    }
    void display() {
        cout << "\nStaff Code: " << code;
    }
};

class Teacher : public Staff {
    char subject[20];
public:
    void getdata() {
        Staff::getdata();
        cout << "Enter Subject: ";
        cin >> subject;
    }
    void display() {
        Staff::display();
        cout << "\nSubject: " << subject;
    }
};

class Officer : public Staff {
    char grade[5];
public:
    void getdata() {
        Staff::getdata();
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void display() {
        Staff::display();
        cout << "\nGrade: " << grade;
    }
};

void main() {
    clrscr();
    Teacher t;
    Officer o;

    cout << "\n--- Enter Teacher Data ---\n";
    t.getdata();
    cout << "\n--- Enter Officer Data ---\n";
    o.getdata();

    cout << "\n--- Teacher Details ---";
    t.display();
    cout << "\n\n--- Officer Details ---";
    o.display();

    getch();
}
