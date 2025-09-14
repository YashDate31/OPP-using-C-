// * A copy constructor creates a new object by copying another object.
using namespace std;


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) { // Parameterized constructor
        name = n;
        age = a;
    }

    Person(const Person& p) { // Copy constructor
        name = p.name;
        age = p.age;
        cout << "Copy constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("John", 25);
    Person p2 = p1; // Copy constructor is called

    p1.display();
    p2.display();

    return 0;
}

#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int x1, int y1) { x = x1; y = y1; }

    // Copy constructor
    Point(const Point &p2) {
        x = p2.x;
        y = p2.y;
        cout << "Copy constructor called." << endl;
    }

    int getX() { return x; }
    int getY() { return y; }
};

int main() {
    Point p1(10, 15); // Normal constructor
    Point p2 = p1;    // Copy constructor called here

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;

    return 0;
}

