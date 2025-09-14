// * Uses an inline function to quickly calculate the cube of a number.

#include <iostream>
using namespace std;

inline int cube(int s) {
    return s * s * s;
}

int main() {
    int num = 4;
    cout << "The cube of " << num << " is: " << cube(num) << endl;
    return 0;
}
