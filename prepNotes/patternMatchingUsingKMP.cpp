#include <bits/stdc++.h>
using namespace std;

// to calculate lps array
void computeLPS(string pattern , vector<int>&lps){
    int m = pattern.length();

    int len =0;
    int i=1;

    lps[0]=0;

    while(i<m){
        if(pattern[i]== pattern[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        } 
    }
}
// KMP searching function
void KMPSearch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    vector<int> lps(m, 0);

    // Step 1: Build LPS array
    computeLPS(pattern, lps);

    int i = 0;  // Text pointer
    int j = 0;  // Pattern pointer

    // Step 2: Search for the pattern
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Pattern found at index "
                 << i - j << endl;

            j = lps[j - 1];
        }
        else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1];
            }
            else {
                i++;
            }
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";

    KMPSearch(text, pattern);

    return 0;
}