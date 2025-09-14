#include <iostream.h>
#include <conio.h>
#include <iomanip.h> // Required in Turbo C++ for setw()

void main()
{
    clrscr();  // Clear screen

    cout << setw(30) << "Welcome to cpp" << endl;

    getch();   // Wait for key press
}

/*
Output:

                 Welcome to cpp
*/
