// * Reads a struct from a binary file.

#include <iostream>
#include <fstream>

struct Person {
    char name[50];
    int age;
};

int main() {
    Person p;

    // Open file in binary mode
    std::ifstream inFile("person.bin", std::ios::binary);

    if (!inFile) {
        std::cerr << "Error opening file. Please run program1 first." << std::endl;
        return 1;
    }

    // Read the struct from the file
    inFile.read(reinterpret_cast<char*>(&p), sizeof(Person));

    inFile.close();

    std::cout << "Data read from person.bin:" << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;

    return 0;
}
