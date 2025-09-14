// * Creating objects on the heap using pointers and 'new'.

#include <iostream>

class Entity {
public:
    Entity() { std::cout << "Entity created on the heap." << std::endl; }
    ~Entity() { std::cout << "Entity destroyed." << std::endl; }
    void info() { std::cout << "I am an entity." << std::endl; }
};

int main() {
    // Create an object on the heap, ptr holds its address
    Entity* ptr = new Entity();

    ptr->info();

    delete ptr; // Must manually delete the object to free memory
    ptr = nullptr;

    return 0;
}
