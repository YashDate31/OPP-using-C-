// * Copies content character by character.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    ifstream sourceFile("char_source.txt");
    ofstream destFile("char_destination.txt");

    ofstream("char_source.txt") << "Copy me!";

    if (!sourceFile.is_open() || !destFile.is_open()) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) { // Read character by character
        destFile.put(ch); // Write character by character
    }

    sourceFile.close();
    destFile.close();

    cout << "File copied character by character." << endl;

    return 0;
}

