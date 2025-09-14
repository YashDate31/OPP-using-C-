// * Copies content from one file to another, line by line.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream sourceFile("source.txt");
    std::ofstream destFile("destination.txt");

    // Create a dummy source file for testing
    std::ofstream dummySource("source.txt");
    dummySource << "This is the first line.\n";
    dummySource << "This is the second line.\n";
    dummySource.close();

    if (!sourceFile.is_open() || !destFile.is_open()) {
        std::cerr << "Error opening files!" << std::endl;
        return 1;
    }

    std::string line;
    while (getline(sourceFile, line)) {
        destFile << line << std::endl; // Write the line to the destination
    }

    sourceFile.close();
    destFile.close();

    std::cout << "File copied successfully." << std::endl;

    return 0;
}
