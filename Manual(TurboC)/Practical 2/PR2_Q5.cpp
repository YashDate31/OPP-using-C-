#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    int rate = 412345, period = 35, year = 2024;

    cout << setw(10) << "Rate" << setw(10) << "Period" << setw(10) << "Year\n";
    cout << setw(10) << rate << setw(10) << period << setw(10) << year << "\n";  // Format output

    getch();  // Hold screen
}

/*
Output:
      Rate    Period      Year
    412345        35      2024
*/
