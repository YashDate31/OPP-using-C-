// * Overloading a function with a different order of parameters.
using namespace std;


#include <iostream>
#include <string>

class Greeter {
public:
    void greet(string name, int age) {
        cout << "Hello " << name << ", you are " << age << " years old." << endl;
    }
    void greet(int age, string name) {
        cout << "At age " << age << ", your name is " << name << "." << endl;
    }
};

int main() {
    Greeter g;
    g.greet("Sarah", 28);
    g.greet(32, "Mike");
    return 0;
}

