// * Without virtual base class, showing the ambiguity error.
using namespace std;


#include <iostream>

class Base {
public:
    int value = 1;
};

class Derived1 : public Base {};
class Derived2 : public Base {};

class Final : public Derived1, public Derived2 {
public:
    void show() {
        // AMBIGUITY ERROR: which 'value' to use? Derived1's or Derived2's?
        // cout << value << endl; 
        
        // To fix without virtual, you must specify the path
        cout << "Value via Derived1: " << Derived1::value << endl;
        cout << "Value via Derived2: " << Derived2::value << endl;
    }
};

int main() {
    Final f;
    f.show();
    return 0;
}

