// * Reading from a file using the open() member function.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile;
    inFile.open("sample2.txt");
    std::string line;

    if (inFile.is_open()) {
        std::cout << "Reading from sample2.txt:" << std::endl;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Error opening file! Make sure sample2.txt exists." << std::endl;
    }

    return 0;
}
