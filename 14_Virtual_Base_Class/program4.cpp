// * Without virtual base class, showing the ambiguity error.

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
        // std::cout << value << std::endl; 
        
        // To fix without virtual, you must specify the path
        std::cout << "Value via Derived1: " << Derived1::value << std::endl;
        std::cout << "Value via Derived2: " << Derived2::value << std::endl;
    }
};

int main() {
    Final f;
    f.show();
    return 0;
}
