// * Reads and displays the entire content of a text file.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("sequential_data.txt");

    if (!inFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "--- File Content ---" << std::endl;
    while (getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    std::cout << "--- End of File ---" << std::endl;

    inFile.close();
    return 0;
}
