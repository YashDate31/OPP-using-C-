#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    int total_marks = 450;
    int marks_obtained = 378;
    float percentage;

    percentage = (marks_obtained * 100) / total_marks;  // Implicit type casting (int to float)

    cout << "Percentage = " << percentage << "%\n";

    getch();  // Hold screen
}

/*
Output:
Percentage = 84%
*/
