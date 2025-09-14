#include<iostream>
class A {
  public:
    void fun(); // Declaration
};

// Definition outside class
void A::fun() {
    cout << "fun() called";
}

int main() {
    A a;
    a.fun();
    return 0;
}
