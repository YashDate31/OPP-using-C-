//* Write a program to dynamically allocate an array of integers and then deallocate it.
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Allocate memory for an array

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Deallocate the array
    arr = nullptr;

    return 0;
}

