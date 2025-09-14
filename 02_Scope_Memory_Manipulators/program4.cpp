// * Write a program to demonstrate the scope resolution operator (::) to define a member function outside the class.

#include <iostream>
using namespace std;

class MyClass {
public:
    void printMessage(); // Function declaration
};

// Function definition outside the class using scope resolution operator
void MyClass::printMessage() {
    cout << "This message is from a function defined outside the class." << endl;
}ogram to demonstrate the scope resolution operator (::) to define a member function outside the class.

#include <iostream>

class MyClass {
public:
    void printMessage(); // Function declaration
};

// Function definition outside the class using scope resolution operator
void MyClass::printMessage() {
    std::cout << "This message is from a function defined outside the class." << std::endl;
}

int main() {
    MyClass obj;
    obj.printMessage();
    return 0;
}
