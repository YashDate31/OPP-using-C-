#include <iostream>
using namespace std;

int main () {
    short x = 200;
    int y;
    y = x;

    cout << " The value of x: " << x << endl;
    cout << " The value of y: " << y << endl;

    int num = 20;
    char ch = 'a';

    int res = 20 + 'a';
    cout << " Type casting char to int: " << res << endl;

    float val = num + 'A';
    cout << " Type casting to float: " << val << endl;

    return 0;
}
