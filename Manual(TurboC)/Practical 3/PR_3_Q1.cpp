#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();  // Clear screen

    double length = 12.567;
    double breadth = 6.789;
    double area = length * breadth;

    float f_area = (float)area;  // Cast to float
    int i_area = (int)area;      // Cast to int (inches, rounded down)

    cout << "Area (double): " << area << "\n";
    cout << "Area (float) : " << f_area << "\n";
    cout << "Area (int)   : " << i_area << "\n";

    getch();  // Pause screen
}

/*
Output:
Area (double): 85.3239
Area (float) : 85.3239
Area (int)   : 85
*/
