#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter the number of elements in an array: ";
   cin>>n;
   
   int arr[n];
   cout<<"Enter the array elements: ";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int k;
   cout<<"Enter the target sum: ";
   cin>>k;
   
   //three nested loops
   for(int i=0;i<n;i++){
       for(int j=j+1;j<n;j++){  // j+1 to start from the second number of an array to avoid duplicacy of numbers
           for(int l=j+1;l<n;l++){ // l+1 to start from the 3rd number of an array to again avoid duplicacy
               
               //checking sum for the triplet
               if(arr[i]+arr[j]+arr[l]==k){
                   cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[l]<<"="<<k<<endl;
               }
           }
       }
   }
    return 0;
}
