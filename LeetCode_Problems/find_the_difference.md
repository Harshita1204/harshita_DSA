```cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> f(26,0);
        for(char ch: s){
            f[ch-'a']++;
        }
        for(char ch:t){
            f[ch-'a']--;
            if(f[ch-'a']<0){
                return ch;
            }
        }
        return ' ';
    }
};
```