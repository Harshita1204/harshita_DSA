#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,8,1,4};    
    int n =5;
    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest= arr[i];
        }
    }
    cout<<smallest;
    return 0;
}