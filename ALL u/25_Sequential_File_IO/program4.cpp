// * Reads and displays the entire content of a text file.
using namespace std;


#include <iostream>
#include <fstream>
#include <string>

int main() {
    ifstream inFile("sequential_data.txt");

    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string line;
    cout << "--- File Content ---" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    cout << "--- End of File ---" << endl;

    inFile.close();
    return 0;
}

