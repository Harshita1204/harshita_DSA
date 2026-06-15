#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,5,1,3,2};
    int n =6;
    int k =3;

    int sum =0;

    //calculate the first window
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxSum = sum;
    for(int i =k;i<n;i++){
        //remove left element and add new right element
        sum = sum-arr[i-k]+arr[i];
        if(sum>maxSum){
            maxSum = sum;
        }
    }
    cout<<maxSum;
    return 0;

}
