#include <iostream>
#include <fstream>

int main(void) {
    std::ofstream file;
    file.open("testNoOMP.txt");

    for (int i = 0; i < 1000000; i++) {
        file << "Hello, World!" << std::endl;
    }

    file.close();
    return 0;
}