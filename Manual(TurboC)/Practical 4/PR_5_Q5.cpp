#include<iostream.h>
#include<conio.h>

class mean
{
    int a, b;
    float avg;

public:
    void assign(int x, int y)  // Member function defined inside class
    {
        a = x;
        b = y;
    }

    void display()
    {
        avg = (a + b) / 2.0;  // Calculate mean using typecasting
        cout << "Mean of " << a << " and " << b << " is: " << avg;
    }
};

void main()
{
    clrscr();  // Clear the screen

    mean m1;
    m1.assign(4, 8);  // Assign values from main
    m1.display();

    getch();  // Wait for key press
}

/*
Output:
Mean of 4 and 8 is: 6
*/
