// * Overloading the binary plus (+) operator to add two Complex objects.
using namespace std;


#include <iostream>

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(2.0, 5.0);
    Complex c3;

    c3 = c1 + c2; // Calls the operator+ member function

    c1.print();
    cout << " + ";
    c2.print();
    cout << " = ";
    c3.print();

    return 0;
}

