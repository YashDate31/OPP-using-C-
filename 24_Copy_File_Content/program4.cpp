// * Checks if a file copy was successful by comparing file sizes.

#include <iostream>
#include <fstream>

long getFileSize(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    if (!file) return -1;
    return file.tellg();
}

int main() {
    const char* src = "file_to_copy.txt";
    const char* dst = "copied_file.txt";

    std::ofstream(src) << "Some data to verify copy.";

    std::ifstream source(src, std::ios::binary);
    std::ofstream dest(dst, std::ios::binary);

    dest << source.rdbuf(); // A fast way to copy files

    source.close();
    dest.close();

    if (getFileSize(src) == getFileSize(dst) && getFileSize(src) != -1) {
        std::cout << "File copy successful (sizes match)." << std::endl;
    } else {
        std::cerr << "File copy failed." << std::endl;
    }

    return 0;
}
