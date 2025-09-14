#include <iostream.h>
#include <conio.h>

class Staff
{
    char name[20];
    float basic, da, hra, gross;

public:
    void get()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basic;

        // Calculate DA and HRA based on basic salary
        da = 0.745 * basic;
        hra = 0.30 * basic;
        gross = basic + da + hra;
    }

    void show()
    {
        // Display the salary details
        cout << "Name: " << name << "\n";
        cout << "Basic: " << basic << "\n";
        cout << "DA: " << da << "\n";
        cout << "HRA: " << hra << "\n";
        cout << "Gross: " << gross << "\n";
    }
};

void main()
{
    clrscr();  // Clear screen

    Staff s;
    s.get();
    s.show();

    getch();   // Hold screen
}

/*
Output:
Enter name: Rahul
Enter basic salary: 10000
Name: Rahul
Basic: 10000
DA: 7450
HRA: 3000
Gross: 20450
*/
