// * A static function modifies a static data member.

#include <iostream>
using namespace std;

class Settings {
public:
    static int brightness;

    static void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
        }
    }
};

int Settings::brightness = 50; // Initial brightness

int main() {
    cout << "Initial brightness: " << Settings::brightness << endl;

    Settings::increaseBrightness();
    Settings::increaseBrightness();

    cout << "Updated brightness: " << Settings::brightness << endl;

    return 0;
}
