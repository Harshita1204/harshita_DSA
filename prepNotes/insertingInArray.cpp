#include<iostream>
using namespace std;
int main(){
    int arr[100];   
    int n;        

    cout<<"Enter number of elements: ";
    cin>>n;        
    cout<<"Enter elements: "<<endl;
    
    // Loop to take array input
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int pos, value;
    cout<<"Enter position (0-based index): ";
    cin>>pos;       // Position where we want to insert

    cout<<"Enter value to insert: ";
    cin>>value;     // Value to insert in array

    // Check if position is valid
    if(pos < 0 || pos > n){
        cout<<"Invalid position!"<<endl;
        return 0;   
    }

    // Check if array is already full
    if(n >= 100){
        cout<<"Array is full!"<<endl;
        return 0;
    }

    // Shift elements to the right
    // Start from last element and move backwards
    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];  
        // Move each element one position to the right
    }

    // Insert new value at given position
    arr[pos] = value;

    n++;   // Increase size because we inserted one element

    cout<<"Array after insertion:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}