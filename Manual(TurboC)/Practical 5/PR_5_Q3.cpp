#include <iostream.h>
#include <conio.h>

class Circle
{
    float radius, area;

public:
    void read()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void compute()
    {
        area = 3.14 * radius * radius;  // Calculate area
    }

    void display();
};

void Circle::display()
{
    cout << "Radius: " << radius << "\n";
    cout << "Area: " << area << "\n";  // Show result
}

void main()
{
    clrscr();  // Clear screen

    Circle c;
    c.read();
    c.compute();
    c.display();

    getch();  // Pause output
}

/*
Output:
Enter radius: 5
Radius: 5
Area: 78.5
*/
