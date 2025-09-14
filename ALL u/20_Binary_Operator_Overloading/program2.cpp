// * Overloading the less than (<) operator to compare two Distance objects.
using namespace std;


#include <iostream>

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(int f = 0, float i = 0) : feet(f), inches(i) {}

    // Overload < operator
    bool operator<(const Distance& d) {
        float total1 = feet * 12 + inches;
        float total2 = d.feet * 12 + d.inches;
        return total1 < total2;
    }
};

int main() {
    Distance d1(5, 7.5);
    Distance d2(6, 1.2);

    if (d1 < d2) {
        cout << "Distance d1 is less than d2." << endl;
    } else {
        cout << "Distance d1 is not less than d2." << endl;
    }

    return 0;
}

