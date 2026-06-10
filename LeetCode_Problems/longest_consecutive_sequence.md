```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int longest = 0;
         for(int num : s){
            // Start only if the  previous number does not exist otherwise not
            if(s.find(num-1) == s.end()){
                int current = num;
                int count = 1;
                // Keep going till the next number is existing
                while(s.find(current+1) != s.end()){
                    current++;
                    count++;
                }
                if(count > longest){
                    longest = count;
                }
            }
        }
        return longest;
    }
};
```