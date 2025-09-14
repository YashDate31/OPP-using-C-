// * Writing to a file using the open() member function.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    ofstream outFile;
    outFile.open("sample2.txt"); // Open the file using the open() function

    if (outFile.is_open()) {
        outFile << "This file was opened using the .open() method." << endl;
        outFile.close();
        cout << "Successfully wrote to sample2.txt" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}

