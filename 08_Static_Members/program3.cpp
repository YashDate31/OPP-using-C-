// * Combines a static member and a static function to track object count.

#include <iostream>
using namespace std;

class GameObject {
private:
    static int objectCount; // Static data member

public:
    GameObject() {
        objectCount++;
    }

    static int getObjectCount() { // Static member function
        return objectCount;
    }
};

int GameObject::objectCount = 0; // Definition of static member

int main() {
    cout << "Initial object count: " << GameObject::getObjectCount() << endl;

    GameObject g1;
    GameObject g2;

    cout << "Object count after creation: " << GameObject::getObjectCount() << endl;

    return 0;
}
