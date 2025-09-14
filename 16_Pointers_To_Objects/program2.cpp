// * The 'this' pointer refers to the current object instance.
using namespace std;


#include <iostream>

class Box {
private:
    int length;
public:
    Box(int length) {
        // 'this->length' is the member variable
        // 'length' is the local parameter
        this->length = length;
    }

    int getLength() {
        return this->length; // Using 'this' to return member variable
    }
};

int main() {
    Box b(15);
    cout << "The length of the box is: " << b.getLength() << endl;
    return 0;
}

