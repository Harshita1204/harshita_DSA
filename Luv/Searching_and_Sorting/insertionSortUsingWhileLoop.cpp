#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int>& arr) {
    int i = 1;   // start from second element
    while (i < n) {

        int temp = arr[i];
        int j = i - 1;
        // shift elements greater than temp to the right
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        // place temp at correct position
        arr[j + 1] = temp;
        i++;
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
    insertionSort(n, arr);
    cout << "Sorted array: ";
    int i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}
