// * An array of objects where each object has a constructor.

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    Book() { // Constructor
        cout << "A Book object is created." << endl;
    }
};

int main() {
    Book library[3]; // Array of 3 Book objects
    library[0].title = "The Hobbit";
    library[1].title = "Lord of the Rings";
    library[2].title = "Dune";

    cout << "\nLibrary contents:" << endl;
    for(int i=0; i<3; ++i) {
        cout << library[i].title << endl;
    }

    return 0;
}
