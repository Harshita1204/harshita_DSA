```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0;
        int right = s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};
```
- In the above question of reverse a string , we are using two pointer approach , one starting from the index = 0 and the other will start from the end that is size()-1 .
- we are using a loop while(left<right) , when the two pointers will meet that means they both are on the same position now , the loop should stop .
 