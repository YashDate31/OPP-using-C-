// * Writing to a file using the open() member function.

#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile;
    outFile.open("sample2.txt"); // Open the file using the open() function

    if (outFile.is_open()) {
        outFile << "This file was opened using the .open() method." << std::endl;
        outFile.close();
        std::cout << "Successfully wrote to sample2.txt" << std::endl;
    } else {
        std::cout << "Error opening file!" << std::endl;
    }

    return 0;
}
