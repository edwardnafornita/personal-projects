#include <iostream>
#include <fstream>

#define MAX 12

int main(void) {
    std::ofstream file;
    file.open("test.txt");

    #pragma omp parallel for
        for (int i = 0; i < 1000000; i++) {
            file << "Hello, World!" << std::endl;
        }

    file.close();
    return 0;
}

