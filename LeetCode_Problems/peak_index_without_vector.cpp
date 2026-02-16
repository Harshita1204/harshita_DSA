#include <iostream>
using namespace std;

// Function to find peak index
int peakIndexInMountainArray(int arr[], int n) {

    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        // If we are in increasing part
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        // If we are in decreasing part
        else {
            e = mid;
        }
    }

    // s == e → peak index
    return s;
}

int main() {

    // Simple array (no vector)
    int arr[] = {0, 2, 4, 7, 5, 3, 1};

    // Calculate size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = peakIndexInMountainArray(arr, n);

    cout << "Peak index is: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;

    return 0;
}
