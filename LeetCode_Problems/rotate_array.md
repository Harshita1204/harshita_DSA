```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
          vector<int> ans(n); 
         for(int i = 0; i < n; i++){
           ans[(i + k) % n] = nums[i];
          }
         nums = ans;
    }
};
// 1. First : newIndex = oldIndex + k (move the element k steps to the right).
// 2. If newIndex goes beyond the last index, it must wrap around to the beginning.
// 3. We use % n to wrap the index back into the valid range [0, n-1].
// 4. Therefore, the final formula becomes: newIndex = (oldIndex + k) % n.
```