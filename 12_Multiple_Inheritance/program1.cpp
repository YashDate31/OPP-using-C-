// * A class 'Bat' inherits from two base classes: 'Mammal' and 'WingedAnimal'.
using namespace std;


#include <iostream>

class Mammal {
public:
    Mammal() {
        cout << "I am a mammal." << endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        cout << "I have wings." << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
public:
    Bat() {
        cout << "I am a bat." << endl;
    }
};

int main() {
    Bat b;
    return 0;
}

