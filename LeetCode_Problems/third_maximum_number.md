```cpp
class Solution {
public:
    long long thirdMax(vector<int>& nums) {
        long long maximum = LLONG_MIN;
        long long secondMaximum = LLONG_MIN;
        long long thirdMaximum = LLONG_MIN;

        for(int n : nums){
            if(n>maximum){
                thirdMaximum = secondMaximum;
                 secondMaximum = maximum;
                 maximum = n;
             
            }else if (n > secondMaximum && n != maximum){
                thirdMaximum = secondMaximum;
                secondMaximum = n;
            }else if(n> thirdMaximum &&(n != secondMaximum && n!= maximum)){
                thirdMaximum = n;
            }
        }
        if(thirdMaximum == LLONG_MIN){
            return maximum;
        }
            return thirdMaximum;
    }
};
```but the 