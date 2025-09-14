// * Reads an array of integers from a binary file.

#include <iostream>
#include <fstream>

int main() {
    const int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    std::ifstream inFile("numbers.bin", std::ios::binary);

    if (!inFile) {
        std::cerr << "Error opening file. Please run program3 first." << std::endl;
        return 1;
    }

    // Read the entire array from the file
    inFile.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    inFile.close();

    std::cout << "Numbers read from binary file: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
