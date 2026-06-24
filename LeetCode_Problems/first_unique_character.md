```cpp
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0); // vector of size 26 , initially all the values are zero
        for(char ch:s){ // count frequency of each character
        // Convert character to index
            // 'a' -> 0
            // 'b' -> 1
            // 'c' -> 2
            // ...
            // 'z' -> 25
            freq[ch-'a']++; 
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1){ // check frequency of current character , if it appears only once
                return i;
            }
        }
        return -1;
    }
};