// * A static data member is shared among all objects of a class.

#include <iostream>
using namespace std;

class Item {
public:
    static int count; // Static data member declaration

    Item() {
        count++; // Increment count each time an object is created
    }
};

int Item::count = 0; // Static data member definition

int main() {
    cout << "Initial count: " << Item::count << endl;

    Item i1;
    Item i2;
    Item i3;

    cout << "Count after creating 3 objects: " << Item::count << endl;

    return 0;
}
