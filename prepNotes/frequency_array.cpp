#include<iostream>
using namespace std;

// Question : Given a string, determine whether its characters
// can be rearranged to form a palindrome.
/*
Example
Input:  aabbc
Output: Yes
Because we can rearrange it as:
abcba
*/
bool canFormPalindrome(string s){
    int freq[26]={0};

    //count frequency for every character
    for(char ch:s){
        freq[ch-'a']++;
    }
    /*
    suppose string s ="aabbc"
     a->2
     b->2
     c->1

    ch-'a'
    ex: 'a' -'a' = 0
        'b' -'a' = 1
        'c' -'a' = 2
        so c gets stored at freq[2]
    */
   // find odd frequencies
   int oddCount = 0;
   for(int i=0;i<26;i++){
    if(freq[i]%2!=0){
        oddCount++;
    }
}
return oddCount<=1;
}
int main(){
    string s;
    cin>>s;
    if(canFormPalindrome(s))
    cout<<"yes";
    else
    cout<<"no";

    return 0;
}