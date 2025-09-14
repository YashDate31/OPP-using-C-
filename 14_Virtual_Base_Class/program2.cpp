// * Demonstrates how the virtual base class constructor is called only once.
using namespace std;


#include <iostream>

class A {
public:
    int a_data;
    A() { a_data = 10; cout << "A's constructor" << endl; }
};

class B : virtual public A {
public:
    B() { cout << "B's constructor" << endl; }
};

class C : virtual public A {
public:
    C() { cout << "C's constructor" << endl; }
};

class D : public B, public C {
public:
    D() { cout << "D's constructor" << endl; }
    void show() {
        // No ambiguity in accessing a_data
        cout << "a_data is " << a_data << endl;
    }
};

int main() {
    D obj;
    obj.show();
    return 0;
}

