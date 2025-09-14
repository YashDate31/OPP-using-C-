// * Overloading a function with different types of parameters.

#include <iostream>

class Display {
public:
    void print(int i) {
        std::cout << "Printing int: " << i << std::endl;
    }
    void print(double f) {
        std::cout << "Printing float: " << f << std::endl;
    }
    void print(const char* c) {
        std::cout << "Printing string: " << c << std::endl;
    }
};

int main() {
    Display d;
    d.print(5);
    d.print(5.5);
    d.print("Hello C++");
    return 0;
}
