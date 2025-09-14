// * Converts a character to its integer ASCII value using a modern C++ cast.

#include <iostream>
using namespace std;

int main() {
    char char_val = 'A';
    int int_val;

    int_val = static_cast<int>(char_val); // Explicit C++ static_cast

    cout << "Character: " << char_val << endl;
    cout << "Integer (ASCII) value after static_cast: " << int_val << endl;

    return 0;
}
