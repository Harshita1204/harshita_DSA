#include<iostream>
#include<vector>
using namespace std;

// make merge function that will merge the elements
void merge(int arr[], int low ,int mid , int high){
    vector<int>temp;
    int i = low;
    int j = mid+1;
    
    // now compare the elements from the both halves 
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //now copy the remaining elements from the left side
    while(i<=mid){
        temp.push_back(arr[i]);
        j++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }

    //now copy the temp into an original array
    for(int h =0;h<temp.size();h++){
        arr[low+h]=temp[h];
    }
}
void mergeSort(int arr[], int low, int high){
    // Base case
    if (low >= high){
        return;
    }
    int mid = (low + high) / 2;
    // Sort left half
    mergeSort(arr, low, mid);
    // Sort right half
    mergeSort(arr, mid + 1, high);
    // Merge both sorted halves
    merge(arr, low, mid, high);
}
int main(){
    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}