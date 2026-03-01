#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of n: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"enter the elements of an array: "<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"elements of an array are: "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}