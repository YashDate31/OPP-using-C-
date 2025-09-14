// * Appends new data to the end of an existing file.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    // Open file in append mode
    ofstream outFile("sequential_data.txt", std::ios::app);

    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    cout << "Appending numbers 11 to 15 to file..." << endl;
    for (int i = 11; i <= 15; ++i) {
        outFile << i << endl;
    }

    outFile.close();
    cout << "Done." << endl;

    return 0;
}

