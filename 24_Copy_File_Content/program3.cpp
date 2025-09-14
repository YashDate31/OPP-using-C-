// * Copies formatted data (like name and age) from one file to another.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create a source file with formatted data
    std::ofstream source_out("formatted_source.txt");
    source_out << "Alice " << 30 << std::endl;
    source_out << "Bob " << 25 << std::endl;
    source_out.close();

    std::ifstream source_in("formatted_source.txt");
    std::ofstream dest_out("formatted_destination.txt");

    if (!source_in.is_open() || !dest_out.is_open()) {
        std::cerr << "Error opening files!" << std::endl;
        return 1;
    }

    std::string name;
    int age;
    while (source_in >> name >> age) { // Read formatted input
        dest_out << "Name: " << name << ", Age: " << age << std::endl; // Write formatted output
    }

    source_in.close();
    dest_out.close();

    std::cout << "Formatted data copied successfully." << std::endl;

    return 0;
}
