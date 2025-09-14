// * A pointer to an object is used to access its members.

#include <iostream>

class MyClass {
public:
    int data = 10;
    void showData() {
        std::cout << "Data is: " << data << std::endl;
    }
};

int main() {
    MyClass obj;
    MyClass* ptr; // Pointer to an object of MyClass

    ptr = &obj; // Pointer now holds the address of obj

    // Accessing members using the arrow operator (->)
    ptr->showData();
    std::cout << "Accessing data directly: " << ptr->data << std::endl;

    return 0;
}
