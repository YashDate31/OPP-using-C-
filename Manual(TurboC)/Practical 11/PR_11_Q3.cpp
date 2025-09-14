#include <iostream.h>
#include <conio.h>

// Base class Student
class Student {
public:
    int rollno;          // student roll number
    char name[30];       // student name
    char course[20];     // course name
    char cls[10];        // class/standard

    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Class: ";
        cin >> cls;
    }

    void showData() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Class: " << cls << endl;
    }
};

// Derived class Result
class Result : public Student {
public:
    int m1, m2, m3;     // marks in 3 subjects
    int total;          // total marks
    float percentage;   // percentage

    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;

        total = m1 + m2 + m3;
        percentage = total / 3.0;
    }

    void showResult() {
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

void main() {
    clrscr();

    Result r;   // object of derived class

    cout << "Enter Student Details:\n";
    r.getData();
    r.getMarks();

    cout << "\nStudent Details:\n";
    r.showData();
    r.showResult();

    getch();
}

/*
================= OUTPUT =================

Enter Student Details:
Enter Roll Number: 101
Enter Name: Sneha
Enter Course: Computer
Enter Class: D3
Enter marks of 3 subjects: 78 85 90

Student Details:
Roll Number: 101
Name: Sneha
Course: Computer
Class: D3
Marks: 78, 85, 90
Total: 253
Percentage: 84.33%
*/
