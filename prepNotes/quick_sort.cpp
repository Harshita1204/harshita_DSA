#include<iostream>
using namespace std;
void quickSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int pivot = arr[high]; // choosing last element as pivot element
    int i = low - 1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    int p = i+1;
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}
int main(){
    int arr[]={34,67,12,3,67,33,90,56,54,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"before quick sort"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    quickSort(arr,0,n-1);
    cout<<"After sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}