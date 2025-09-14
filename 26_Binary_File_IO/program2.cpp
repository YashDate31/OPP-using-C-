// * Reads a struct from a binary file.
using namespace std;


#include <iostream>
#include <fstream>

struct Person {
    char name[50];
    int age;
};

int main() {
    Person p;

    // Open file in binary mode
    ifstream inFile("person.bin", std::ios::binary);

    if (!inFile) {
        cerr << "Error opening file. Please run program1 first." << endl;
        return 1;
    }

    // Read the struct from the file
    inFile.read(reinterpret_cast<char*>(&p), sizeof(Person));

    inFile.close();

    cout << "Data read from person.bin:" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    return 0;
}

