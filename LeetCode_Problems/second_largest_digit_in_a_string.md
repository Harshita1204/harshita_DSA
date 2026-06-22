```cpp
class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest =-1;
        //char ch = s;
        for(char ch: s){
            if(ch>='0'&& ch <='9'){
                int n = ch-'0'; // this will give u the actual digit in integer as ch stores in ASCII
             if(n > largest){
                secondLargest = largest ;
                largest = n;
            }else if(n > secondLargest && n!= largest){
                secondLargest = n;
            }
            }
        }
       
            return secondLargest;
    }
};
```