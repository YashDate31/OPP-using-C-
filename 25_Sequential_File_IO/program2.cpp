// * Reads numbers from a file sequentially and calculates their sum.

#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("sequential_data.txt");

    if (!inFile) {
        std::cerr << "Error opening file. Please run program1 first." << std::endl;
        return 1;
    }

    int number;
    int sum = 0;
    std::cout << "Reading numbers from file and summing them..." << std::endl;

    // Read until the end of the file
    while (inFile >> number) {
        sum += number;
    }

    inFile.close();
    std::cout << "Sum of numbers is: " << sum << std::endl;

    return 0;
}
