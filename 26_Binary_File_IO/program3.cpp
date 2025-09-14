// * Writes an array of integers to a binary file.

#include <iostream>
#include <fstream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(int);

    std::ofstream outFile("numbers.bin", std::ios::binary);

    if (!outFile) {
        std::cerr << "Error creating file." << std::endl;
        return 1;
    }

    // Write the entire array to the file
    outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    outFile.close();
    std::cout << "Successfully wrote array to numbers.bin" << std::endl;

    return 0;
}
