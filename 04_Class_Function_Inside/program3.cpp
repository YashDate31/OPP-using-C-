// * Shows a simple calculator that can add two numbers.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Member function to add two numbers, defined inside
    int add(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Calculator calc;
    int result = calc.add(5, 7);

    cout << "The sum is: " << result << endl;

    return 0;
}
