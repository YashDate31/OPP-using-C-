// * Creates an array of Student objects and stores their data.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void displayData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS]; // Array of objects

    students[0].setData("Alice", 20);
    students[1].setData("Bob", 21);
    students[2].setData("Charlie", 19);

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        students[i].displayData();
    }

    return 0;
}
