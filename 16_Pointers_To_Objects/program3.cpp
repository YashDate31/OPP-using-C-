// * Using 'this' to return the current object and allow function chaining.

#include <iostream>

class Calc {
private:
    int value;
public:
    Calc(int v) : value(v) {}

    Calc& add(int x) {
        value += x;
        return *this; // Return the current object by reference
    }

    Calc& subtract(int x) {
        value -= x;
        return *this; // Return the current object by reference
    }

    void print() {
        std::cout << "Current value: " << value << std::endl;
    }
};

int main() {
    Calc c(10);
    c.add(5).subtract(3).add(8); // Chaining calls
    c.print();
    return 0;
}
