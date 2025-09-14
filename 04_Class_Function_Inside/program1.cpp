// * Defines a simple Dog class with a bark() function inside.

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string name;

    // Member function defined inside the class
    void bark() {
        cout << name << " says: Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.name = "Buddy";
    myDog.bark();

    return 0;
}
