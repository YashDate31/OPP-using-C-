// * Constructor call order in multilevel inheritance.

#include <iostream>

class Level1 {
public:
    Level1() { std::cout << "Level 1 constructor." << std::endl; }
};

class Level2 : public Level1 {
public:
    Level2() { std::cout << "Level 2 constructor." << std::endl; }
};

class Level3 : public Level2 {
public:
    Level3() { std::cout << "Level 3 constructor." << std::endl; }
};

int main() {
    Level3 obj; // Calls constructors from Level1 -> Level2 -> Level3
    return 0;
}
