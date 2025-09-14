// * Appends new data to the end of an existing file.

#include <iostream>
#include <fstream>

int main() {
    // Open file in append mode
    std::ofstream outFile("sequential_data.txt", std::ios::app);

    if (!outFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::cout << "Appending numbers 11 to 15 to file..." << std::endl;
    for (int i = 11; i <= 15; ++i) {
        outFile << i << std::endl;
    }

    outFile.close();
    std::cout << "Done." << std::endl;

    return 0;
}
