// * Overloading the logical NOT (!) operator using a friend function.
using namespace std;


#include <iostream>

class TruthValue {
private:
    bool value;
public:
    TruthValue(bool v) : value(v) {}
    void display() { cout << (value ? "true" : "false") << endl; }
    friend bool operator!(const TruthValue& tv);
};

bool operator!(const TruthValue& tv) {
    return !tv.value;
}

int main() {
    TruthValue t(true);
    cout << "Original value: ";
    t.display();

    cout << "Negated value: " << (!t ? "true" : "false") << endl;

    return 0;
}

