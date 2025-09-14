// * Overloading the logical NOT (!) operator using a friend function.

#include <iostream>

class TruthValue {
private:
    bool value;
public:
    TruthValue(bool v) : value(v) {}
    void display() { std::cout << (value ? "true" : "false") << std::endl; }
    friend bool operator!(const TruthValue& tv);
};

bool operator!(const TruthValue& tv) {
    return !tv.value;
}

int main() {
    TruthValue t(true);
    std::cout << "Original value: ";
    t.display();

    std::cout << "Negated value: " << (!t ? "true" : "false") << std::endl;

    return 0;
}
