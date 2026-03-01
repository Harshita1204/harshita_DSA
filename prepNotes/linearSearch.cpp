#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 25, 30, 40};
    int n = 4;
    int key = 30;
    int found = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        cout << "Found at index " << found;
    else
        cout << "Not Found";

    return 0;
}