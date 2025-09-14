// * A virtual function that is not overridden by the derived class.

#include <iostream>

class Entity {
public:
    virtual void showInfo() {
        std::cout << "This is an Entity." << std::endl;
    }
};

class Player : public Entity {
public:
    // Player does not override showInfo()
    void move() {
        std::cout << "Player is moving." << std::endl;
    }
};

int main() {
    Entity* e_ptr = new Player();

    // Calls the base class version because it's not overridden
    e_ptr->showInfo();

    delete e_ptr;
    return 0;
}
