// * Writing to a file using the fstream constructor.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    // Create and open a text file using the constructor
    ofstream outFile("sample1.txt");

    if (outFile.is_open()) {
        outFile << "Hello, this is line 1." << endl;
        outFile << "This is line 2." << endl;
        outFile.close(); // Close the file
        cout << "Successfully wrote to sample1.txt" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}

