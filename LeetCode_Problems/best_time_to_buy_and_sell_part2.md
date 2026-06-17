```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for (int i=1; i <n;i++){
            if(prices[i]<prices[i-1]){
                continue;
            }
            if(prices[i]>prices[i-1]){
                profit= prices[i] - prices[i-1]+profita;
            }
        }
        return profit;
    }
};
```
// in this problem statement we can sell as many times we want and we have to sum the max profit 