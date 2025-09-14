// * Write a program to dynamically allocate and deallocate memory for an integer using new and delete.
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // Allocate memory for an integer
    *ptr = 25;
    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;
    delete ptr; // Deallocate the memory
    ptr = nullptr; // Avoid dangling pointer
    return 0;
}

