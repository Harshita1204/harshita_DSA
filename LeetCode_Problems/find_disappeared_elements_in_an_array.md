```cpp
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i])-1;
            if(nums[index]>0){
                nums[index]=-nums[index];

            }
        }
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0){
                    ans.push_back(i+1);
                }
            }
        
        return ans;
    }
};
```
### explanation

- Numbers are from 1 to n, so each number has a corresponding index.
- For every number, go to its index (number - 1) and mark it negative.
- Negative means that number is present in the array.
- After marking, any index that remains positive means that number is missing.
- Return all missing numbers using index + 1.