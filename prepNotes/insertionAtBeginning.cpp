#include <iostream>
using namespace std;

int main() {

    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    // Shift all elements to the right
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert at index 0
    arr[0] = value;

    n++;

    cout << "Array after insertion: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}