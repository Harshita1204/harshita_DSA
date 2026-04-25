#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> mp;

    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it : mp) {
        cout << "Element " << it.first << " occurs " << it.second << " times\n";
    }

    return 0;
}