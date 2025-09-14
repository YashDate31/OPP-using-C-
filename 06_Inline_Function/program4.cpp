// * Uses an inline function to add two numbers.
using namespace std;


#include <iostream>
using namespace std;

inline float add(float a, float b) {
    return a + b;
}

int main() {
    float x = 5.5, y = 10.3;
    cout << "The sum is: " << add(x, y) << endl;
    return 0;
}

