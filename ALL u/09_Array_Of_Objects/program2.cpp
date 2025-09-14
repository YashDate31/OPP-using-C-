// * Takes input from the user to populate an array of Employee objects.
using namespace std;


#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;

    void getInput() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore(); // to consume the newline character
        getline(cin, name);
    }

    void showOutput() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "How many employees? ";
    cin >> n;

    Employee employees[n]; // Array of objects

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        employees[i].getInput();
    }

    cout << "\n--- Employee Details ---" << endl;
    for (int i = 0; i < n; ++i) {
        employees[i].showOutput();
    }

    return 0;
}

