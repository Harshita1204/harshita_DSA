#include <iostream>
#include <stack>
using namespace std;

// Function to check whether parentheses are valid
bool isValid(string s) {
    // Stack to store opening brackets
    stack<char> st;
    
    // Traverse the string character by character
    for(int i = 0; i < s.length(); i++) {

        char ch = s[i];   // Current character

        // Case 1: If opening bracket → push into stack
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // Case 2: If closing bracket

            // If stack is empty → no opening bracket to match
            if(st.empty())
                return false;

            // Get top element of stack
            char top = st.top();

            // Check if closing bracket matches the top opening bracket
            if((ch == ')' && top == '(') ||
               (ch == '}' && top == '{') ||
               (ch == ']' && top == '[')) {

                // If matched → remove opening bracket
                st.pop();
            }
            else {
                // If not matched → invalid string
                return false;
            }
        }
    }
    // If stack is empty → all brackets matched
    // If stack not empty → some opening brackets left unmatched
    return st.empty();
}

int main() {

    string s = "({[]})";   // Test string

    if(isValid(s))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
    return 0;
}
