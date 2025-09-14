// * An external function is made a friend of a class to access its private data.

#include <iostream>
using namespace std;

class MyClass {
private:
    int secret;
public:
    MyClass() : secret(42) {}
    friend void showSecret(MyClass& obj); // Declaring external function as a friend
};

// External function definition
void showSecret(MyClass& obj) {
    cout << "The secret value is: " << obj.secret << endl;
}

int main() {
    MyClass myObj;
    showSecret(myObj); // The external function can access the private member
    return 0;
}
