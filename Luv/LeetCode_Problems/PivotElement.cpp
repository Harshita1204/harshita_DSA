#include <iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid; // because if pivot is mid then e=mid-1 condition will fail so e= mid
        }
        mid=s+(e-s)/2; // updating the mid
    }
    return s;
}
int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot is at index: "<<getPivot(arr,5)<<endl;
    return 0;
}
