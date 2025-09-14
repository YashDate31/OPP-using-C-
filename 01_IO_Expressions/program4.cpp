// * Write a program to read a full line of text, including spaces.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!" << endl;
    return 0;
}
