// * Write a program to use manipulators like setw, setprecision, and fixed.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float pi = 3.14159265359;

    cout << "Default output: " << pi << endl;

    // Using setw to set the width
    cout << "Using setw(20): " << setw(20) << pi << endl;

    // Using setprecision to control the number of decimal places
    cout << "Using setprecision(4): " << setprecision(4) << pi << endl;

    // Using fixed to force decimal notation
    cout << "Using fixed: " << fixed << pi << endl;

    // Combining manipulators
    cout << "Combined (fixed, setprecision(2)): " << fixed << setprecision(2) << pi << endl;

    return 0;
}
