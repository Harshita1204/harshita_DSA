#include<iostream>
using namespace std;
int main(){

    int temp[10] = {3,5,2,6,3}; 
    // temp is an array of 10 integers

    cout << sizeof(temp) << endl;     
    // 40
    // Reason: temp has 10 elements, each int is 4 bytes
    // 10 × 4 = 40 bytes

    cout << sizeof(*temp) << endl;    
    // 4
    // Reason: temp decays to &temp[0]
    // *temp means first element (temp[0]) → int → 4 bytes

    cout << sizeof(&temp) << endl;    
    // 8
    // Reason: &temp is the address of the entire array
    // Address = pointer → 8 bytes on 64-bit system


    int *ptr = &temp[0];  
    // ptr stores address of first element of array

    cout << sizeof(ptr) << endl;      
    // 8
    // Reason: ptr is a pointer variable
    // Any pointer takes 8 bytes on 64-bit system

    cout << sizeof(*ptr) << endl;     
    // 4
    // Reason: *ptr is the value it points to → int → 4 bytes

    cout << sizeof(&ptr) << endl;     
    // 8
    // Reason: &ptr is address of pointer variable
    // Address = pointer → 8 bytes
}
