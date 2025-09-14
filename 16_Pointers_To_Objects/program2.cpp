// * The 'this' pointer refers to the current object instance.

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
    std::cout << "The length of the box is: " << b.getLength() << std::endl;
    return 0;
}
