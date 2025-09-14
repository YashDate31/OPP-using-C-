// * Shows how a smaller data type (int) automatically converts to a larger one (float).
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int int_val = 10;
    float float_val;

    float_val = int_val; // Implicit conversion from int to float

    cout << "Integer value: " << int_val << endl;
    cout << "Float value after implicit cast: " << float_val << endl;

    return 0;
}

