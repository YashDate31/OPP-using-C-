// * Overloading the unary minus (-) operator using a member function.
using namespace std;


#include <iostream>

class Space {
private:
    int x, y, z;
public:
    Space(int a, int b, int c) : x(a), y(b), z(c) {}

    void display() {
        cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
    }

    // Overload unary minus
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Space s(10, -20, 30);
    cout << "Original: ";
    s.display();

    -s; // Calls the operator-() function

    cout << "Negated:  ";
    s.display();

    return 0;
}

