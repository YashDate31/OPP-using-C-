// * A static member function can be called without creating an object.

#include <iostream>
using namespace std;

class MathHelper {
public:
    static int square(int num) { // Static member function
        return num * num;
    }
};

int main() {
    // Calling the static function using the class name
    int result = MathHelper::square(5);
    cout << "The square of 5 is: " << result << endl;

    return 0;
}
