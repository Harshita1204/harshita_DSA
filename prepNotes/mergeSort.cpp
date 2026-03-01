#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {

    int temp[100];   // temporary array (max size 100)

    int i = left;      // start of left subarray
    int j = mid + 1;   // start of right subarray
    int k = left;      // start of temp array

    // Compare elements from both halves
    while(i <= mid && j <= right) {

        if(arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining left half
    while(i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining right half
    while(j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for(int x = left; x <= right; x++) {
        arr[x] = temp[x];
    }
}

void mergeSort(int arr[], int left, int right) {

    if(left < right) {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);        // sort left half
        mergeSort(arr, mid + 1, right);   // sort right half

        merge(arr, left, mid, right);     // merge both halves
    }
}

int main() {

    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}