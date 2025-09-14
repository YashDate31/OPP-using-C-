// * Demonstrates how integer division differs from floating-point division.

#include <iostream>
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 2;

    // Integer division truncates the result
    float result1 = num1 / num2; 
    cout << "Result of 5 / 2 (integer division): " << result1 << endl;

    // Casting one operand to float results in floating-point division
    float result2 = static_cast<float>(num1) / num2;
    cout << "Result of 5 / 2 (with casting): " << result2 << endl;

    return 0;
}
