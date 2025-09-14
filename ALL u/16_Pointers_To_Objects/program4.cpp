// * Creating objects on the heap using pointers and 'new'.
using namespace std;


#include <iostream>

class Entity {
public:
    Entity() { cout << "Entity created on the heap." << endl; }
    ~Entity() { cout << "Entity destroyed." << endl; }
    void info() { cout << "I am an entity." << endl; }
};

int main() {
    // Create an object on the heap, ptr holds its address
    Entity* ptr = new Entity();

    ptr->info();

    delete ptr; // Must manually delete the object to free memory
    ptr = nullptr;

    return 0;
}

