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
    cout << "Enter value to insert at end: ";
    cin >> value;

    // Insert directly at end
    arr[n] = value;

    n++;

    cout << "Array after insertion: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}