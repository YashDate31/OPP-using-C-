// * Checks if a file copy was successful by comparing file sizes.
using namespace std;


#include <iostream>
#include <fstream>

long getFileSize(const string& filename) {
    ifstream file(filename, std::ios::binary | std::ios::ate);
    if (!file) return -1;
    return file.tellg();
}

int main() {
    const char* src = "file_to_copy.txt";
    const char* dst = "copied_file.txt";

    ofstream(src) << "Some data to verify copy.";

    ifstream source(src, std::ios::binary);
    ofstream dest(dst, std::ios::binary);

    dest << source.rdbuf(); // A fast way to copy files

    source.close();
    dest.close();

    if (getFileSize(src) == getFileSize(dst) && getFileSize(src) != -1) {
        cout << "File copy successful (sizes match)." << endl;
    } else {
        cerr << "File copy failed." << endl;
    }

    return 0;
}

