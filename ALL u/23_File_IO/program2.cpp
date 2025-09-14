// * Reading from a file using the fstream constructor.
using namespace std;


#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a text file for reading using the constructor
    ifstream inFile("sample1.txt");
    string line;

    if (inFile.is_open()) {
        cout << "Reading from sample1.txt:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file! Make sure sample1.txt exists." << endl;
    }

    return 0;
}

