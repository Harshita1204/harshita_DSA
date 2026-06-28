// addition of first two elements will equals to the third and soo on
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    cin>>arr[0];
    cin>>arr[1];

    for(int i=2;i<n;i++){ // we will start the loop from 2 because we already know the 0 and 1 index elements 
        arr[i] = arr[i-1]+arr[i-2];
    }
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}