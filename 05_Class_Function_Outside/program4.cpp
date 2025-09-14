// * A Student class where student details are printed by an external function.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;

    void setDetails(string n, int r);
    void printDetails();
};

void Student::setDetails(string n, int r) {
    name = n;
    roll_no = r;
}

void Student::printDetails() {
    cout << "Name: " << name << ", Roll No: " << roll_no << endl;
}

int main() {
    Student s1;
    s1.setDetails("John Doe", 101);
    s1.printDetails();

    return 0;
}
