#include <iostream>

using namespace std;

class Heap {
    private:
        int *heap;
        int capacity;
        int index;

    public:
        Heap(int size);
        void insert(int value);
        void upheap();
        void downheap(int i);
        int removeMin();
        bool isEmpty();
        int size();
        int min();
        void print();
        void swap(int value1, int value2);
};

Heap::Heap(int heapSize) {
    this->capacity = heapSize;
    this->index = -1;
    this->heap = new int[capacity];
}

void Heap::insert(int value) {
    if (index >= capacity) {
        cout << "Error: No more space allocated in heap.\n";
    }
    else {
        heap[++index] = value;
        upheap();
    }
}

int Heap::removeMin() {
    if (isEmpty()) {
        return -1;
    }

    int minimum = heap[0];
    heap[0] = heap[index--];
    heap[index + 1] = 0;
    downheap(index);

    return minimum;
}

void Heap::upheap() {
    int currentPosition = index, parentIndex = (currentPosition - 1) / 2;

    while (parentIndex >= 0 && heap[currentPosition] < heap[parentIndex]) {
        swap(currentPosition, parentIndex);
        currentPosition = parentIndex;
        parentIndex = (currentPosition - 1) / 2;
    }
}

void Heap::downheap(int i) {
    if (i <= 0) {
        return;
    }

    int currentIndex = i;

    while (currentIndex < i) {
        int leftChildIndex = (currentIndex * 2) + 1, rightChildIndex = (currentIndex * 2) + 2;

        if (leftChildIndex > i) {
            break;
        }

        int valueToSwap;
        if (rightChildIndex > i) {
            valueToSwap = leftChildIndex;
        } else if (heap[leftChildIndex] < heap[rightChildIndex]) {
            valueToSwap = leftChildIndex;
        } else {
            valueToSwap = rightChildIndex;
        }

        if (heap[currentIndex] < heap[valueToSwap]) {
            break;
        }

        swap(valueToSwap, currentIndex);
        currentIndex = valueToSwap;
    }
}

bool Heap::isEmpty() {
    if (index <= 0) {
        return true;
    }
    else {
        return false;
    }
}

void Heap::swap(int value1, int value2) {
    int temp = heap[value1];
    heap[value1] = heap[value2];
    heap[value2] = temp;
}

int Heap::size() {
    return capacity;
}

int Heap::min() {
    return heap[0];
}

void Heap::print() {
    for (int i = 0; i < capacity; i++) {
        if (i == 0) {
            cout << "[" << heap[i] << ",";
        } else if (i == capacity - 1) {
            cout << heap[i] << "]" << endl;
        } else {
            cout << heap[i] << ",";
        }
    }
}

// int main(void) {
//     Heap *newheap = new Heap(5);
//     newheap->insert(99);
//     newheap->insert(2);
//     newheap->insert(456);
//     newheap->insert(1);
//     newheap->insert(10);
//     newheap->print();
//     cout << newheap->removeMin() << endl;
//     newheap->insert(3);
//     newheap->print();

//     cout << newheap->size() << endl;
// }