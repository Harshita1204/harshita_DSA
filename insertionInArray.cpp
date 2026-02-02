#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;          // Current size of array
    int pos = 2;        // Position to insert (index)
    int value = 25;     // Value to insert

    // Shift elements to the right to make space
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = value;
    n++; // Increase array size

    // Print updated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

