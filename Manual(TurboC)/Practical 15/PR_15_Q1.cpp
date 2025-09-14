#include<iostream.h>
#include<conio.h>

// Base class
class Parent
{
protected:
    int parent_value;
    
public:
    // Base class constructor
    Parent(int val)
    {
        parent_value = val;
        cout << "Parent constructor called with value: " << val << endl;
    }
};

// Derived class
class Child : public Parent
{
private:
    int child_value;
    
public:
    // Derived class constructor
    Child(int p_val, int c_val) : Parent(p_val)
    {
        child_value = c_val;
        cout << "Child constructor called with value: " << c_val << endl;
    }
    
    void display()
    {
        cout << "Parent value: " << parent_value << endl;
        cout << "Child value: " << child_value << endl;
    }
};

void main() 
{
    clrscr();
    
    cout << "Creating Child object:" << endl;
    Child obj(100, 200);
    
    cout << "\nDisplaying values:" << endl;
    obj.display();
    
    getch();
}

/*
Output:
Creating Child object:
Parent constructor called with value: 100
Child constructor called with value: 200

Displaying values:
Parent value: 100
Child value: