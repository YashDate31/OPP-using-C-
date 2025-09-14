// * Reads numbers from a file sequentially and calculates their sum.
using namespace std;


#include <iostream>
#include <fstream>

int main() {
    ifstream inFile("sequential_data.txt");

    if (!inFile) {
        cerr << "Error opening file. Please run program1 first." << endl;
        return 1;
    }

    int number;
    int sum = 0;
    cout << "Reading numbers from file and summing them..." << endl;

    // Read until the end of the file
    while (inFile >> number) {
        sum += number;
    }

    inFile.close();
    cout << "Sum of numbers is: " << sum << endl;

    return 0;
}

