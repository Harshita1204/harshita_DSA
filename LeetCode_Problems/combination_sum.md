```cpp
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;
    void cs(int index, int target, vector<int>& candidates) {
        if(target == 0) {
            ans.push_back(subset);
            return;
        }
        if(target < 0)
            return;

        if(index == candidates.size())
            return;

       
        cs(index + 1, target, candidates);

        subset.push_back(candidates[index]);
        cs(index, target - candidates[index], candidates);
        subset.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        cs(0, target, candidates);
        return ans;
    }
};
```