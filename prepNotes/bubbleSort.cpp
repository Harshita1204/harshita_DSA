#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 2, 8, 1};
    int n = 4;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) { //after i passes , i elements at the end are fixed. so , 
       //   remaining elements to check that is (n-1) but when comparing arr[j] and arr[j+1], we must stop one step before so n-i-1
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}