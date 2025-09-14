// * Resolving ambiguity when two base classes have a function with the same name.

#include <iostream>

class BaseA {
public:
    void show() {
        std::cout << "BaseA show()" << std::endl;
    }
};

class BaseB {
public:
    void show() {
        std::cout << "BaseB show()" << std::endl;
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
