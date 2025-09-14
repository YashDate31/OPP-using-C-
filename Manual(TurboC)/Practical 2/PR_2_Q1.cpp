#include<iostream.h>
#include<conio.h>

class student
{
    private:
    int marks;
    char name[100];

    public:
    void get_stu_info();
    void put_stu_info();
};

void student::get_stu_info()
{   
    cout << "\nEnter the name of the student: ";
    cin >> name;

    cout << "Enter the marks in % of student: ";
    cin >> marks;
}

void student::put_stu_info()
{
    cout << "\nStudent name is: " << name << endl;
    cout << "Marks is: " << marks << "%" << endl;
}

void main()
{
    clrscr();  // Clear screen

    student s1;
    s1.get_stu_info();
    s1.put_stu_info();

    getch();   // Wait for key press
}

/*
Sample Output:

Enter the name of the student: Yash
Enter the marks in % of student: 85

Student name is: Yash
Marks is: 85%
*/
