#include <iostream>

int main(void) {
    int total_amount {100}, total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    std::cout << average << std::endl;

    average = static_cast<double>(total_amount) / total_number;
    // invoking a type cast in C++ requires the "static_cast<T>", where T is a generic type. 
    //  meaning that T will be treated as whatever type the function is called with. i.e. static_cast<double>, T will be treated as a double type.
    // static_cast will also check to ensure that whatever you're casting can be casted to that type indicated during the function call.
    std::cout << average << std::endl;
}