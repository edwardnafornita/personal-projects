#include <iostream>
#include <exception>
#include <cctype>
#include <vector>
#define length 100

class Stack {
    private:
        std::vector<char> A;
        int top;

    public:
        Stack();
        void push(char c);
        char pop();
        char top();
        bool isEmpty();
        int size();
};

// Constructor 
Stack::Stack() {
    t = A.end(); // Empty Stack
}

// isEmpty() function
bool Stack::isEmpty() {
    if (t == 0) {
        return true;
    } else {
        return false;
    }
}

// push onto stack
void Stack::push(char c) {
    if (t >= length) {
        throw std::range_error("Stack is Full!\n");
    } else {
        t += 1;
        A.add(c);
    }
}

// pop off of stack
char Stack::pop() {
    if (isEmpty()) {
        throw std::range_error("Stack is Empty!\n");
    } else {
        t -= 1;
        return A.at(t + 1);
    }
}

// return top element of stack
char Stack::top() {
    if (isEmpty()) {
        throw std::range_error("Stack is Empty!\n");
    } else {
        return A.at(t);
    }
}

// return size of the stack
int Stack::size() {
    return t;
}

int main(void) {
    Stack stack;

    try {
        char input;
        std::cout << "Please enter in a character!" << std::endl;
        std::cin >> input;
        if (isalpha(input)) {
            std::cout << stack.isEmpty() << std::endl;
            stack.push(input);
            std::cout << stack.top() << std::endl;
            std::cout << stack.isEmpty() << std::endl;
            std::cout << "Number of elements in stack: " << stack.size() << std::endl;
            std::cout << "Element " << stack.pop() << " got popped off the stack!" << std::endl;
            std::cout << "Is stack empty now? " << stack.isEmpty() << std::endl;
        }
    } catch (std::exception& e) {
        throw std::runtime_error(e.what());
    }
}