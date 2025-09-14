// * Manually converts a double to an int using a C-style cast.

#include <iostream>
using namespace std;

int main() {
    double double_val = 9.87;
    int int_val;

    int_val = (int)double_val; // Explicit C-style cast

    cout << "Double value: " << double_val << endl;
    cout << "Integer value after explicit cast: " << int_val << endl;

    return 0;
}
