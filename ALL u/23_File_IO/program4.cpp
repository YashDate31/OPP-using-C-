// * Reading from a file using the open() member function.
using namespace std;


#include <iostream>
#include <fstream>
#include <string>

int main() {
    ifstream inFile;
    inFile.open("sample2.txt");
    string line;

    if (inFile.is_open()) {
        cout << "Reading from sample2.txt:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file! Make sure sample2.txt exists." << endl;
    }

    return 0;
}

