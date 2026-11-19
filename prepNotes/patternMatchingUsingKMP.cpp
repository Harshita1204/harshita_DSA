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