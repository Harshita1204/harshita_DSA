#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}