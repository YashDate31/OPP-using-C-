// * Implements a Person class with a function to introduce themselves.

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Member function defined inside the class
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person person1;
    person1.name = "Alex";
    person1.age = 25;
    person1.introduce();

    return 0;
}
