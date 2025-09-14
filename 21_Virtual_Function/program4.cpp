// * A virtual function that is not overridden by the derived class.
using namespace std;


#include <iostream>

class Entity {
public:
    virtual void showInfo() {
        cout << "This is an Entity." << endl;
    }
};

class Player : public Entity {
public:
    // Player does not override showInfo()
    void move() {
        cout << "Player is moving." << endl;
    }
};

int main() {
    Entity* e_ptr = new Player();

    // Calls the base class version because it's not overridden
    e_ptr->showInfo();

    delete e_ptr;
    return 0;
}

