```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
            }
            if(nums[i]==candidate){
                count++;
            }else{
                count--; 
            }
        }
        return candidate;
    }
};
```
# voting algorithm
 - the majority element appears more than n/2 times . so, if you keep cancelling one majority element with one non- majority element, the majority element still survive .
 
 2 vs 1 -> cancel 
 2 vs 1 -> cancel
 2 -> still survives

 - the majority element can't be completely eliminated because there are 
  more of it than the others combined .
