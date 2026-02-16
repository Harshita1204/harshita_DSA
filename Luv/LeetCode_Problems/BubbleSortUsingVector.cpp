#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n) {
    // Number of passes
    for (int i = 0; i < n - 1; i++) {
        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If elements are in wrong order, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
