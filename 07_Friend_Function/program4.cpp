// * A global function compares private members of two different classes.

#include <iostream>
using namespace std;

class Beta; // Forward declaration

class Alpha {
private:
    int data;
public:
    Alpha(int d) : data(d) {}
    friend void compare(Alpha, Beta);
};

class Beta {
private:
    int data;
public:
    Beta(int d) : data(d) {}
    friend void compare(Alpha, Beta);
};

void compare(Alpha a, Beta b) {
    if (a.data > b.data) {
        cout << "Alpha's data is greater." << endl;
    } else if (b.data > a.data) {
        cout << "Beta's data is greater." << endl;
    } else {
        cout << "Both have equal data." << endl;
    }
}

int main() {
    Alpha objA(100);
    Beta objB(50);
    compare(objA, objB);
    return 0;
}
