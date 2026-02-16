#include <iostream>
using namespace std;
// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {

    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++) {

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {

            // If elements are in wrong order, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call bubble sort
    bubbleSort(arr, n);

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
