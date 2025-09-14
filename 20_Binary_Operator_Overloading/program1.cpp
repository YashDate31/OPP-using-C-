// * Overloading the binary plus (+) operator to add two Complex objects.

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
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(2.0, 5.0);
    Complex c3;

    c3 = c1 + c2; // Calls the operator+ member function

    c1.print();
    std::cout << " + ";
    c2.print();
    std::cout << " = ";
    c3.print();

    return 0;
}
