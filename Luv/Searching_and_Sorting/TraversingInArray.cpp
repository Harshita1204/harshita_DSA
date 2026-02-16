#include <iostream>
using namespace std;

void traversing(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void printArray(int arr[], int size) {
    cout << "Array elements are: ";
    traversing(arr, size);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    return 0;
}

