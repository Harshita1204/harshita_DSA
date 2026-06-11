```cpp
class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int> q;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] < 0) { // store the index of every negative element
                q.push(i);
            }
            if (i >= k - 1) { // Start processing once first window is complete
                while (!q.empty() && q.front() < i - k + 1) {
                    q.pop();
                }
                if (q.empty()) {
                    ans.push_back(0);
                } else {
                    ans.push_back(arr[q.front()]);
                }
            }
        }
        return ans;
    }
};
```
## Explanation
 - Window size never changes , it always stays the same.
 - we can use queue to store the indices of negative elements , not the values, so we can tell when they leave the current window .
 - the condition i>= k-1 means the first complete window of size k has been formed, so we can start producing answers.
 - before processing a window, remove all the negative indices that are outside the current window using:
   ```
   while(!q.empty() && q.front()<i-k+1)
   ```
- if the queue is empty , there is no negative number in the current window, so we store 0, otherwise the answer is arr[q.front()]
- Time complexity : O(n) because every index is pushed and popped at most once .
- space complexity : O(k) in the worst case , since the queue stores indices from the current window.