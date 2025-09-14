#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    int a, b;
    float avg;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    avg = (float)(a + b) / 2;  // Explicit type casting

    cout << "Average = " << avg << "\n";

    getch();  // Hold screen
}

/*
Output:
Enter two numbers: 5 7
Average = 6
*/
