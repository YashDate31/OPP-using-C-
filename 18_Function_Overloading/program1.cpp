// * Overloading a function with different numbers of parameters.

#include <iostream>

class Print {
public:
    void show(int i) {
        std::cout << "Here is an integer: " << i << std::endl;
    }
    void show(int i, int j) {
        std::cout << "Here are two integers: " << i << " and " << j << std::endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(10, 20);
    return 0;
}
