#include<iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"enter the elements of an array: "<<endl;
    for(int i=0;i<100;i++){
        cin>>arr[i];
    }
    cout<<"elements of an array are: ";
    for(int i=0;i<100;i++){
    cout<<arr[i]<<endl;
    }
    return 0;
}