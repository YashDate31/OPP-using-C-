// * Write a program to evaluate the expression (a + b)^2.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    float result = pow(a + b, 2);
    cout << "(a + b)^2 = " << result << endl;
    return 0;
}
