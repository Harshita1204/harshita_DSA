#include <iostream>
using namespace std;

 int findPosition(int arr[], int n, int k){
     int s=0;
     int e= n-1;
     int mid = s+(e-s)/2;
     while(s<=e){
         // if key is found
         if(arr[mid]==k){
             return mid;
         }
         //left part is sorted
         if(arr[s]<=arr[mid]){
             //key lies in the left sorted part
             if(k>=arr[s]&&k<arr[mid]){
                 e=mid-1;
             }
             else{
                 s=mid+1;
             }
         }
         //right part is sorted
         else{
             // key lies in the second part
             if(k>arr[mid]&&k<=arr[e]){
                 s=mid+1;
             }
             else{
                 e= mid-1;
             }
         }
     }
     return -1; //key not found
 }
int main(){
    int arr[]={7,9,1,2,3};
    int n=5;
    int k=2;
    int index= findPosition(arr,5,2);
    cout<<"Index of the key is: "<<index<<endl;
    return 0;
}
