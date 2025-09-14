// * Copies content from one file to another, line by line.
using namespace std;


#include <iostream>
#include <fstream>
#include <string>

int main() {
    ifstream sourceFile("source.txt");
    ofstream destFile("destination.txt");

    // Create a dummy source file for testing
    ofstream dummySource("source.txt");
    dummySource << "This is the first line.\n";
    dummySource << "This is the second line.\n";
    dummySource.close();

    if (!sourceFile.is_open() || !destFile.is_open()) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    string line;
    while (getline(sourceFile, line)) {
        destFile << line << endl; // Write the line to the destination
    }

    sourceFile.close();
    destFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}

