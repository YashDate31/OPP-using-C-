// * A friend function swaps the private data of two different classes.
using namespace std;


#include <iostream>
using namespace std;

class Class2; // Forward declaration

class Class1 {
private:
    int value;
public:
    Class1(int v) : value(v) {}
    void display() { cout << "Class1 value: " << value << endl; }
    friend void swap(Class1&, Class2&);
};

class Class2 {
private:
    int value;
public:
    Class2(int v) : value(v) {}
    void display() { cout << "Class2 value: " << value << endl; }
    friend void swap(Class1&, Class2&);
};

void swap(Class1& c1, Class2& c2) {
    int temp = c1.value;
    c1.value = c2.value;
    c2.value = temp;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);

    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "\nAfter swap:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}

