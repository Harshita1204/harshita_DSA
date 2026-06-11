#include<iostream>
#include<vector>
using namespace std;
 int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
 }
 int main(){
    vector<int> arr = {32,24,48};
    int ans = arr[0];
    for(int i=1;i<arr.size();i++){
        ans= gcd(ans,arr[i]);
    }
    cout<<ans;
    return 0;
 }