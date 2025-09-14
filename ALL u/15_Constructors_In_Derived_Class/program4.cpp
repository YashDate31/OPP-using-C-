// * Constructor call order in multilevel inheritance.
using namespace std;


#include <iostream>

class Level1 {
public:
    Level1() { cout << "Level 1 constructor." << endl; }
};

class Level2 : public Level1 {
public:
    Level2() { cout << "Level 2 constructor." << endl; }
};

class Level3 : public Level2 {
public:
    Level3() { cout << "Level 3 constructor." << endl; }
};

int main() {
    Level3 obj; // Calls constructors from Level1 -> Level2 -> Level3
    return 0;
}

