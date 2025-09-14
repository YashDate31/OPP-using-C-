#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    int *ptr;
    ptr = new int;  // Allocate memory

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "You entered: " << *ptr << "\n";  // Display value

    delete ptr;  // Free memory

    getch();  // Hold screen
}

/*
Output:
Enter a number: 45
You entered: 45
*/
