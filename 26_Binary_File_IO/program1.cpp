// * Writes a struct to a binary file.
using namespace std;


#include <iostream>
#include <fstream>

struct Person {
    char name[50];
    int age;
};

int main() {
    Person p = {"John Doe", 30};

    // Open file in binary mode
    ofstream outFile("person.bin", std::ios::binary);

    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    // Write the struct to the file
    outFile.write(reinterpret_cast<char*>(&p), sizeof(Person));

    outFile.close();
    cout << "Successfully wrote Person struct to person.bin" << endl;

    return 0;
}

