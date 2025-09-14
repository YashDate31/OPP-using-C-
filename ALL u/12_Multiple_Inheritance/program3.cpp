// * Resolving ambiguity when two base classes have a function with the same name.
using namespace std;


#include <iostream>

class BaseA {
public:
    void show() {
        cout << "BaseA show()" << endl;
    }
};

class BaseB {
public:
    void show() {
        cout << "BaseB show()" << endl;
    }
};

class DerivedMulti : public BaseA, public BaseB {
public:
    // To resolve ambiguity, we can specify which one to call
    void callBaseAShow() {
        BaseA::show();
    }
};

int main() {
    DerivedMulti dm;
    // dm.show(); // This would be ambiguous and cause a compile error
    dm.callBaseAShow(); // No ambiguity
    dm.BaseB::show();   // Another way to resolve ambiguity
    return 0;
}

