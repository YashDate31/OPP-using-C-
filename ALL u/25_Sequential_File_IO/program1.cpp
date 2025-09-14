// * Writes a series of numbers to a file sequentially.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    ofstream outFile("sequential_data.txt");

    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    cout << "Writing numbers 1 to 10 to file..." << endl;
    for (int i = 1; i <= 10; ++i) {
        outFile << i << endl; // Write each number on a new line
    }

    outFile.close();
    cout << "Done." << endl;

    return 0;
}

