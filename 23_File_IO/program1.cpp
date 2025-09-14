// * Writing to a file using the fstream constructor.

#include <iostream>
#include <fstream>

int main() {
    // Create and open a text file using the constructor
    std::ofstream outFile("sample1.txt");

    if (outFile.is_open()) {
        outFile << "Hello, this is line 1." << std::endl;
        outFile << "This is line 2." << std::endl;
        outFile.close(); // Close the file
        std::cout << "Successfully wrote to sample1.txt" << std::endl;
    } else {
        std::cout << "Error opening file!" << std::endl;
    }

    return 0;
}
