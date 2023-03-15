#include <iostream>

void printArray(int *a, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printArray(a, 10);

    int b = 8;

    if (b == 7) {
        ++b;
    }
    else if (b == 8) {
        --b;
    }
}