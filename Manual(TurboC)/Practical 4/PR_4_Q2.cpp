
#include<iostream.h>
#include<conio.h>

class student 
{
    char rollno[50];
    char name[50];

public:
    void getinfo()
    {
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter roll no :";
        cin >> rollno;
    }

    void putinfo()
    {
        cout << "-------------------------" << endl;
        cout << "Your name is :" << name << endl;
        cout << "Roll no       :" << rollno << endl;
    }
};

void main()
{
    clrscr();  // Clear screen
    student s;
    s.getinfo();
    s.putinfo();
    getch();   // Wait for key press
}
