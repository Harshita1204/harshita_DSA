```cpp
 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0]; // because on the first day , the only price we know is the first one
        // why buy != 0 because if int buy = 0; then on day 3: profit = 5-0 = 5 , thats not possible , there was never a day when the stock price was 0 , so buy must be initialized to an actual price from the array , and the first prie (price[0]) is the natural choice
        int profit = 0;

        for(int i =1;i < n ; i++){
            if(prices[i]<buy){ // it means we found the cheaper day to buy the stock 
                buy = prices[i];

            }
            if(prices[i]-buy>profit){
                profit = prices[i]-buy; // profit , it means if i buy at this and sell at this , i earn this.

            }
        }
        return profit;
    }
};
```