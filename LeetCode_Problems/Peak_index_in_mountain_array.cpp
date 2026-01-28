#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            // if we are in increasing part
            if (arr[mid] < arr[mid + 1]) {
                s = mid + 1;
            }
            // we are in decreasing part
            else {
                e = mid;
            }
        }

        // s == e → peak index
        return s;
    }
};

int main() {

    Solution obj;

    // Example mountain array
    vector<int> arr = {0, 2, 4, 7, 5, 3, 1};

    int peakIndex = obj.peakIndexInMountainArray(arr);

    cout << "Peak index is: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;

    return 0;
}
