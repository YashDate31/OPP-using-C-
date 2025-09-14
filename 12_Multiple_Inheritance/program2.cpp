// * A derived class inherits from two base classes with functions.
using namespace std;


#include <iostream>

class Base1 {
public:
    void func1() {
        cout << "Function from Base1" << endl;
    }
};

class Base2 {
public:
    void func2() {
        cout << "Function from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void derivedFunc() {
        cout << "Function from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.func1(); // from Base1
    d.func2(); // from Base2
    d.derivedFunc(); // from Derived
    return 0;
}

