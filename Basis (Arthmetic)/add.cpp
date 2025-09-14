// 🚀 Program: Write a C++ program to input two integers and display their sum.

#include <iostream>     // for cout and cin
using namespace std;    // to avoid writing std:: before cout and cin

int main()
{
    int a, b;

    // 👉 Ask the user to input two numbers
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    // 👉 Calculate their sum
    int c = a + b;

    // 👉 Display the result
    cout << "Sum = " << c;

    return 0;
}
