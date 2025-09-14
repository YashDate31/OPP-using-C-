// * Writes an array of integers to a binary file.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(int);

    ofstream outFile("numbers.bin", std::ios::binary);

    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    // Write the entire array to the file
    outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    outFile.close();
    cout << "Successfully wrote array to numbers.bin" << endl;

    return 0;
}

