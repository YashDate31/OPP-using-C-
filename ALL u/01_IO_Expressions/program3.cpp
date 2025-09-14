// * Write a program to read and write different data types (integer, float, character).
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int intValue;
    float floatValue;
    char charValue;

    cout << "Enter an integer: ";
    cin >> intValue;

    cout << "Enter a float: ";
    cin >> floatValue;

    cout << "Enter a character: ";
    cin >> charValue;

    cout << "\n--- You entered ---" << endl;
    cout << "Integer: " << intValue << endl;
    cout << "Float: " << floatValue << endl;
    cout << "Character: " << charValue << endl;

    return 0;
}

