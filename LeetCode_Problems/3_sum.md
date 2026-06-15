```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end()); // firstly sort the vector so that the negative values are in the left and the positive to the right
        int n= nums.size();
        for(int i=0;i<n-2;i++){ // n-2 because after choosing i, we still need 2 more elements

        // skip the duplicates
            if(i>0 && nums[i]==nums[i-1]){ // as we want unique elements if the two alnernative elements are same we will skip those
                continue;
            }
            int left = i+1; 
            int right = n-1;
             while(left<right){
           int  sum = nums[i]+nums[left]+nums[right];
           if(sum==0){
           ans.push_back({nums[i],nums[left],nums[right]});
            left++;
            right--;

            // skipping the left duplicates
            while(left<right && nums[left ]== nums[left-1]){
                left++;
            }
            //skipping the right duplicates
            while(left<right && nums[right]==nums[right+1]){
                right--;
            }
           }else if(sum<0){
            left++;
           }else {
            right--;
           }
        }

        }
        return ans;
    }
};
```
