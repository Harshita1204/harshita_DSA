#include<iostream>
using namespace std;
void Searching(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            cout << "Element " << key << " found at index " << i << endl;
            return;
        }
    }
    cout << "Element " << key << " not found in the array." << endl;
}
int main(){
    int arr[] = {5, 15, 25, 35, 45, 55, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    Searching(arr, size, key);
    return 0;
}
