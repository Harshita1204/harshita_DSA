```cpp
class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount =0;
        for(char ch : word){
            if(isupper(ch))
                capitalCount++;
        }
    
            if(capitalCount == word.size()) // all letter are capital 
                return true;
            
            if(capitalCount == 0) // no letter is capital ie every letter is in lowercase
                return true;
            
            if(capitalCount == 1 && isupper(word[0])) // only first letter is capital rest all are small
                return true;
        
        return false;
    }
};
```