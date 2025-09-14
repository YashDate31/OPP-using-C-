// * Defines an inline function within a class to get a private member.
using namespace std;


#include <iostream>
using namespace std;

class MyClass {
private:
    int secret_num;
public:
    MyClass(int num) : secret_num(num) {}

    // Inline function defined inside the class
    int getSecret() { return secret_num; }
};

int main() {
    MyClass obj(42);
    cout << "The secret number is: " << obj.getSecret() << endl;
    return 0;
}

