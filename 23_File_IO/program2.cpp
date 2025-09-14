// * Reading from a file using the fstream constructor.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a text file for reading using the constructor
    std::ifstream inFile("sample1.txt");
    std::string line;

    if (inFile.is_open()) {
        std::cout << "Reading from sample1.txt:" << std::endl;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Error opening file! Make sure sample1.txt exists." << std::endl;
    }

    return 0;
}
