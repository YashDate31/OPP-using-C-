// * Writes a struct to a binary file.

#include <iostream>
#include <fstream>

struct Person {
    char name[50];
    int age;
};

int main() {
    Person p = {"John Doe", 30};

    // Open file in binary mode
    std::ofstream outFile("person.bin", std::ios::binary);

    if (!outFile) {
        std::cerr << "Error creating file." << std::endl;
        return 1;
    }

    // Write the struct to the file
    outFile.write(reinterpret_cast<char*>(&p), sizeof(Person));

    outFile.close();
    std::cout << "Successfully wrote Person struct to person.bin" << std::endl;

    return 0;
}
