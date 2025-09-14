#include <iostream.h>
#include <conio.h>

int num = 100;  // Global variable

void main()
{
    clrscr();  // Clear screen

    int num = 50;  // Local variable

    cout << "Local num: " << num << "\n";
    cout << "Global num: " << ::num << "\n";  // Access global using ::

    getch();  // Pause screen
}

/*
Output:
Local num: 50
Global num: 100
*/
