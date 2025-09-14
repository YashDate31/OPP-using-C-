#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    int a = 5, b = 7;
    float avg;

    avg =(a + b) / 2;  // Explicit type casting

    cout << "Average = " << avg << "\n";

    getch();  // Hold screen
}

/*
Output:
Average = 6
*/
