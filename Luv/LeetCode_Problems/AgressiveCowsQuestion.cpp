#include <bits/stdc++.h>
using namespace std;

// Check if cows can be placed with minimum distance = mid
bool isPossible(vector<int>& stalls, int k, int mid) {

    int cowCount = 1;           // first cow placed
    int lastPos = stalls[0];   // position of last placed cow

    for (int i = 0; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
        }
        if (cowCount == k) {
            return true;
        }
    }
    return false;
}

// Main function
int aggressiveCows(vector<int>& stalls, int k) {

    sort(stalls.begin(), stalls.end());

    int s = 0;
   int maxi = -1;
   for(int i = 0;i<stalls.size();i++){
       maxi = max(maxi,stalls[i]);
   }
   int e = maxi;
    int ans = -1;

    while (s <= e) {

        int mid = s + (e - s) / 2;

        if (isPossible(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;    // try larger distance
        } else {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main() {

    vector<int> stalls = {4, 2, 1, 3, 6};
    int k = 2;

    cout << aggressiveCows(stalls, k);
    return 0;
}
