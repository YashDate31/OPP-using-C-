// * Creates an array of Point objects and initializes them.

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    void setPoint(int a, int b) {
        x = a;
        y = b;
    }
    void printPoint() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point path[4]; // Array of Point objects

    path[0].setPoint(0, 0);
    path[1].setPoint(1, 2);
    path[2].setPoint(3, 3);
    path[3].setPoint(5, 1);

    cout << "Path points:" << endl;
    for (int i = 0; i < 4; ++i) {
        path[i].printPoint();
    }

    return 0;
}
