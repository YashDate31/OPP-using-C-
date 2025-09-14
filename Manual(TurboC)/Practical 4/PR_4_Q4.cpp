

#include<iostream.h>
#include<conio.h>

class room
{
    int length, breadth, height, area, volume;

public:
    void calculate_area()
    {
        cout << "Enter length, breadth: ";
        cin >> length >> breadth;
        area = length * breadth;
    }

    void calculate_volume()
    {
        cout << "Enter height: ";
        cin >> height;
        volume = length * breadth * height;
    }

    void display()
    {
        cout << "The area of room = " << area << endl;
        cout << "The volume = " << volume;
    }
};

void main()
{
    clrscr();
    room r;
    r.calculate_area();
    r.calculate_volume();
    r.display();
    getch();
}

/*Output: Enter length, breadth: 10 8
          Enter height: 9
          The area of room = 80
          The volume = 720 */
