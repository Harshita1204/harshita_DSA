#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 40;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found != -1)
        cout << "Found at index " << found;
    else
        cout << "Not Found";

    return 0;
}