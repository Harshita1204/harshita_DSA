#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // merge both arrays
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // copy remaining elements of arr1
    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    // copy remaining elements of arr2
    while (j < m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[1000];
    int arr2[1000];
    int arr3[2000];

    int n, m;

    // input first array
    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // input second array
    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    merge(arr1, n, arr2, m, arr3);

    cout << "Merged array:\n";
    print(arr3, n + m);

    return 0;
}
