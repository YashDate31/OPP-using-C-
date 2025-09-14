// * Overloading the binary plus (+) operator using a friend function.
using namespace std;


#include <iostream>

class Vector {
private:
    int x, y;
public:
    Vector(int a = 0, int b = 0) : x(a), y(b) {}
    void display() { cout << "<" << x << ", " << y << ">" << endl; }
    friend Vector operator+(const Vector& v1, const Vector& v2);
};

// Friend function definition
Vector operator+(const Vector& v1, const Vector& v2) {
    return Vector(v1.x + v2.x, v1.y + v2.y);
}

int main() {
    Vector vec1(1, 2);
    Vector vec2(3, 4);
    Vector vec3;

    vec3 = vec1 + vec2; // Calls the friend operator+ function

    vec1.display();
    cout << " + ";
    vec2.display();
    cout << " = ";
    vec3.display();

    return 0;
}

