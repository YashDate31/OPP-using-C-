#include <iostream.h>
#include <conio.h>

// Base class for Area
class Area {
public:
    int length, breadth;

    void getData() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
    }

    int calculateArea() {
        return length * breadth;
    }
};

// Base class for Perimeter
class Perimeter {
public:
    int calculatePerimeter(int l, int b) {
        return 2 * (l + b);
    }
};

// Derived class from both Area and Perimeter
class Rectangle : public Area, public Perimeter {
public:
    void display() {
        cout << "\nLength: " << length;
        cout << "\nBreadth: " << breadth;
        cout << "\nArea of Rectangle: " << calculateArea();
        cout << "\nPerimeter of Rectangle: " << calculatePerimeter(length, breadth) << endl;
    }
};

void main() {
    clrscr();

    Rectangle r;
    r.getData();
    r.display();

    getch();
}

/* 
---------- OUTPUT ----------
Enter length of rectangle: 10
Enter breadth of rectangle: 5

Length: 10
Breadth: 5
Area of Rectangle: 50
Perimeter of Rectangle: 30
--------------------------------
*/
