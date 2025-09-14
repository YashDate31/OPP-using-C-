// * Copies content character by character.

#include <iostream>
#include <fstream>

int main() {
    std::ifstream sourceFile("char_source.txt");
    std::ofstream destFile("char_destination.txt");

    std::ofstream("char_source.txt") << "Copy me!";

    if (!sourceFile.is_open() || !destFile.is_open()) {
        std::cerr << "Error opening files!" << std::endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) { // Read character by character
        destFile.put(ch); // Write character by character
    }

    sourceFile.close();
    destFile.close();

    std::cout << "File copied character by character." << std::endl;

    return 0;
}
