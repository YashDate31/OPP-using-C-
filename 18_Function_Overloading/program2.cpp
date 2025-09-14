// * Overloading a function with different types of parameters.
using namespace std;


#include <iostream>

class Display {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }
    void print(double f) {
        cout << "Printing float: " << f << endl;
    }
    void print(const char* c) {
        cout << "Printing string: " << c << endl;
    }
};

int main() {
    Display d;
    d.print(5);
    d.print(5.5);
    d.print("Hello C++");
    return 0;
}

