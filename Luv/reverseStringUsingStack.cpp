#include<iostream>    
#include<stack>        
using namespace std;

int main(){

    string str = "harshita";   // Original string
    stack<char> s;             // Stack of characters

    // Step 1: Push all characters of string into stack
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];      // Take each character
        s.push(ch);            // Push into stack
    }

    string ans = "";           // Empty string to store reversed result

    // Step 2: Pop all characters from stack
    while(!s.empty()){
        char ch = s.top();     // Get top character
        ans.push_back(ch);     // Add to answer string
        s.pop();               // Remove from stack
    }
    
    cout << "Answer is : " << ans << endl;

    return 0;
}
