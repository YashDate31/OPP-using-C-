// * Reads an array of integers from a binary file.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    const int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    ifstream inFile("numbers.bin", std::ios::binary);

    if (!inFile) {
        cerr << "Error opening file. Please run program3 first." << endl;
        return 1;
    }

    // Read the entire array from the file
    inFile.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    inFile.close();

    cout << "Numbers read from binary file: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

