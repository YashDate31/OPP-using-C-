// * Compares two numbers using a simple inline function.
using namespace std;


#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "The greater number is: " << max(10, 20) << endl;
    return 0;
}

