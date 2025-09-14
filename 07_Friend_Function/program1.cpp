// * An external function accesses private members of two different classes.
using namespace std;


#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int numA;
public:
    ClassA() : numA(12) {}
    friend int add(ClassA, ClassB); // Friend function
};

class ClassB {
private:
    int numB;
public:
    ClassB() : numB(8) {}
    friend int add(ClassA, ClassB); // Friend function
};

// External friend function definition
int add(ClassA objA, ClassB objB) {
    return (objA.numA + objB.numB);
}

int main() {
    ClassA objA;
    ClassB objB;
    cout << "Sum: " << add(objA, objB) << endl;
    return 0;
}

