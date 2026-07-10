```cpp
class Solution {
public:
    void merge(vector<int>& nums , int left , int mid , int right ){
        vector<int>temp;
        int i= left ;
        int j = mid+1 ;
        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=right){
            temp.push_back(nums[j++]);

        }
        for(int k=left;k<=right;k++){
            nums[k]=temp[k-left];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
         int n = nums.size();
        for (int size = 1; size < n; size *= 2) {
            for (int left = 0; left < n - size; left += 2 * size) {
                int mid = left + size - 1;
                int right = min(left + 2 * size - 1, n - 1);
                merge(nums, left, mid, right);
            }
        }
        return nums;
    }
};
```