#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int hash[10] = {0};

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for(int i = 0; i < 10; i++) {
        if(hash[i] != 0) {
            cout << "Element " << i << " occurs " << hash[i] << " times\n";
        }
    }

    return 0;
}