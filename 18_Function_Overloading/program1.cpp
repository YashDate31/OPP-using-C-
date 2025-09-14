// * Overloading a function with different numbers of parameters.
using namespace std;


#include <iostream>

class Print {
public:
    void show(int i) {
        cout << "Here is an integer: " << i << endl;
    }
    void show(int i, int j) {
        cout << "Here are two integers: " << i << " and " << j << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(10, 20);
    return 0;
}

