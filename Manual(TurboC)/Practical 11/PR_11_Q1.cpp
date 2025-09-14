#include <iostream.h>
#include <conio.h>

// Base class Furniture
class Furniture {
public:
    char material[20];   // data member to store material
    float price;         // data member to store price

    void getData() {
        cout << "Enter material: ";
        cin >> material;
        cout << "Enter price: ";
        cin >> price;
    }

    void showData() {
        cout << "Material: " << material
             << ", Price: " << price << endl;
    }
};

// Derived class Table inheriting Furniture
class Table : public Furniture {
public:
    float height;        // data member for height
    char surface[20];    // data member for surface type

    void getTableData() {
        getData();   // take base class data
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter surface type: ";
        cin >> surface;
    }

    void showTableData() {
        showData();  // show base class data
        cout << "Height: " << height
             << ", Surface: " << surface << endl;
    }
};

void main() {
    clrscr();

    Table t;    

    cout << "Enter details of Table:\n";
    t.getTableData();

    cout << "\nTable Details:\n";
    t.showTableData();

    getch();
}

/* 
================= OUTPUT =================

Enter details of Table:
Enter material: Wood
Enter price: 15000
Enter height: 4.5
Enter surface type: Polished

Table Details:
Material: Wood, Price: 15000
Height: 4.5, Surface: Polished
*/
