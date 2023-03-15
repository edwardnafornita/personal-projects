#include "Heap.cpp"

class HeapSort: public Heap {
    public: 
        static void sort(int arr[], int n);
        static void print(int arr[], int n);
};

void HeapSort::sort(int arr[], int n) {
    Heap *heapArray = new Heap(n);

    for (int i = 0; i < n; i++) {
        heapArray->insert(arr[i]);
    }

    // heapArray->print();

    for (int i = 0; i <= n; i++) {
        arr[i] = heapArray->removeMin();
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void HeapSort::print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << "[" << arr[i] << ",";
        } else if (i == n - 1) {
            cout << arr[i] << "]" << endl;
        } else {
            cout << arr[i] << ",";
        }
    }
}

int main(void) {
    int arr[8] = {99, 42, 13, 89, 2, 56, 78, 12};
    int arr2[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr3[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr4[11] = {1, 3, 5, 7, 9, 10, 8, 6, 4, 2};

    HeapSort::sort(arr, 8);
    HeapSort::sort(arr2, 10);
    HeapSort::sort(arr3, 10);
    HeapSort::sort(arr4, 10);

    // HeapSort::print(arr, 8);
    // HeapSort::print(arr2, 10);
    // HeapSort::print(arr3, 10);
    // HeapSort::print(arr4, 10);
}