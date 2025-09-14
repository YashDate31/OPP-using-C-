// * A pointer to an object is used to access its members.
using namespace std;


#include <iostream>

class MyClass {
public:
    int data = 10;
    void showData() {
        cout << "Data is: " << data << endl;
    }
};

int main() {
    MyClass obj;
    MyClass* ptr; // Pointer to an object of MyClass

    ptr = &obj; // Pointer now holds the address of obj

    // Accessing members using the arrow operator (->)
    ptr->showData();
    cout << "Accessing data directly: " << ptr->data << endl;

    return 0;
}

