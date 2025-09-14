// * A class 'Bat' inherits from two base classes: 'Mammal' and 'WingedAnimal'.

#include <iostream>

class Mammal {
public:
    Mammal() {
        std::cout << "I am a mammal." << std::endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        std::cout << "I have wings." << std::endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
public:
    Bat() {
        std::cout << "I am a bat." << std::endl;
    }
};

int main() {
    Bat b;
    return 0;
}
