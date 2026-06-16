```cpp
class solution{
    public:
    int maxProfit(vector<int>$ prices){
        int minp = INT_MAX; // int max is the highest value so the other values will be lesser than that value and we can update it very easily
        int maxProfit = 0;
        for(int p: prices ){
            if(p<minp>{
                minp=p;
            })
            int profit = p-minp;
            if(profit >maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
}