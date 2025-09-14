#include <iostream.h>
#include <conio.h>

// Base class Staff
class Staff {
    int code;
    char name[20];
public:
    void getStaff() {
        cout << "\nEnter Staff Code: ";
        cin >> code;
        cout << "Enter Staff Name: ";
        cin >> name;
    }
    void displayStaff() {
        cout << "\nStaff Code: " << code;
        cout << "\nStaff Name: " << name;
    }
};

// Derived class Teacher from Staff
class Teacher : public Staff {
    char subject[20], publication[20];
public:
    void getTeacher() {
        getStaff(); // Get common staff details
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Publication: ";
        cin >> publication;
    }
    void displayTeacher() {
        displayStaff();
        cout << "\nSubject: " << subject;
        cout << "\nPublication: " << publication;
    }
};

// Derived class Officer from Staff
class Officer : public Staff {
    char grade[10];
public:
    void getOfficer() {
        getStaff();
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void displayOfficer() {
        displayStaff();
        cout << "\nGrade: " << grade;
    }
};

// Derived class Typist from Staff
class Typist : public Staff {
    int speed;
public:
    void getTypist() {
        getStaff();
        cout << "Enter Typing Speed (wpm): ";
        cin >> speed;
    }
    void displayTypist() {
        displayStaff();
        cout << "\nTyping Speed: " << speed;
    }
};

// Derived class Regular Typist from Typist
class Regular : public Typist {
public:
    void getRegular() {
        getTypist();
    }
    void displayRegular() {
        displayTypist();
        cout << "\nType: Regular Typist";
    }
};

// Derived class Casual Typist from Typist
class Casual : public Typist {
    float daily_wages;
public:
    void getCasual() {
        getTypist();
        cout << "Enter Daily Wages: ";
        cin >> daily_wages;
    }
    void displayCasual() {
        displayTypist();
        cout << "\nType: Casual Typist";
        cout << "\nDaily Wages: " << daily_wages;
    }
};

void main() {
    clrscr();   // Clear screen

    // Creating objects
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    cout << "Enter details of Teacher:\n";
    t.getTeacher();
    cout << "\nEnter details of Officer:\n";
    o.getOfficer();
    cout << "\nEnter details of Regular Typist:\n";
    r.getRegular();
    cout << "\nEnter details of Casual Typist:\n";
    c.getCasual();

    cout << "\n\n----- Displaying Details -----\n";
    t.displayTeacher();
    cout << "\n-----------------------------\n";
    o.displayOfficer();
    cout << "\n-----------------------------\n";
    r.displayRegular();
    cout << "\n-----------------------------\n";
    c.displayCasual();

    getch();   // Hold screen
}
