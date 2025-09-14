// * Write a program to demonstrate the scope resolution operator (::) for global variables.

#include <iostream>
using namespace std;

int x = 10; // Global variable

int main() {
    int x = 5; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // Accessing global x using scope resolution operator
    return 0;
}
