// * Overloading a function with a different order of parameters.

#include <iostream>
#include <string>

class Greeter {
public:
    void greet(std::string name, int age) {
        std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;
    }
    void greet(int age, std::string name) {
        std::cout << "At age " << age << ", your name is " << name << "." << std::endl;
    }
};

int main() {
    Greeter g;
    g.greet("Sarah", 28);
    g.greet(32, "Mike");
    return 0;
}
