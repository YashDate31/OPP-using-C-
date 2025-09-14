// * Writes a series of numbers to a file sequentially.

#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("sequential_data.txt");

    if (!outFile) {
        std::cerr << "Error creating file." << std::endl;
        return 1;
    }

    std::cout << "Writing numbers 1 to 10 to file..." << std::endl;
    for (int i = 1; i <= 10; ++i) {
        outFile << i << std::endl; // Write each number on a new line
    }

    outFile.close();
    std::cout << "Done." << std::endl;

    return 0;
}
