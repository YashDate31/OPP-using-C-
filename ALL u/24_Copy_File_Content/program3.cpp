// * Copies formatted data (like name and age) from one file to another.
using namespace std;


#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create a source file with formatted data
    ofstream source_out("formatted_source.txt");
    source_out << "Alice " << 30 << endl;
    source_out << "Bob " << 25 << endl;
    source_out.close();

    ifstream source_in("formatted_source.txt");
    ofstream dest_out("formatted_destination.txt");

    if (!source_in.is_open() || !dest_out.is_open()) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    string name;
    int age;
    while (source_in >> name >> age) { // Read formatted input
        dest_out << "Name: " << name << ", Age: " << age << endl; // Write formatted output
    }

    source_in.close();
    dest_out.close();

    cout << "Formatted data copied successfully." << endl;

    return 0;
}

