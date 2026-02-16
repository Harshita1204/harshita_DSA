#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &ans) {
    int s = 0;
    int e = ans.size() - 1;

    while (s < e) {
        swap(ans[s], ans[e]);
        s++;
        e--;
    }
}

// function to find sum of two arrays
vector<int> sumOfArrays(vector<int> &a, int n, vector<int> &b, int m) {

    int i = n - 1;      // pointer at last index of array a
    int j = m - 1;      // pointer at last index of array b
    int carry = 0;      // carry from previous addition

    vector<int> ans;

    // CASE 1: both arrays have elements
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;        // carry for next digit
        sum = sum % 10;          // last digit stored

        ans.push_back(sum);

        i--;
        j--;
    }

    // CASE 2: first array still has elements
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
        i--;
    }

    // CASE 3: second array still has elements
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
        j--;
    }

    // CASE 4: carry is still left
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
    }

    // answer is reversed because we added from last digit
    reverseArray(ans);

    return ans;
}

int main() {

    vector<int> a = {1, 2, 3};
    vector<int> b = {9, 9};

    vector<int> result = sumOfArrays(a, a.size(), b, b.size());

    cout << "Sum array: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
