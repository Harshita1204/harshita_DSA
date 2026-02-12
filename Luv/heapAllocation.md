What is Heap Allocation?

-> Heap memory is used when we need memory during runtime
-> Memory is created manually
-> It stays allocated until we delete it
-> We must free it using delete

SYNTAX:
datatype* pointerName = new datatype;

This means:
-> Create memory in heap
-> Store its address in a pointer

--code--
#include <iostream>
using namespace std;

int main() {

    int* ptr = new int;   // memory created in heap

    *ptr = 50;            // assign value

    cout << *ptr << endl; // prints 50

    delete ptr;           // free memory

    return 0;
}
--
Explanation:

-> new int creates memory in heap
-> ptr stores the address
-> *ptr = 50 stores value in that memory
-> delete ptr removes memory

If you do not delete, memory leak happens!!

# Array in Heap
int* arr = new int[5];

arr[0] = 10;
arr[1] = 20;

delete[] arr;

Explanation:
-> new int[5] creates array of size 5 in heap
-> Use delete[] for arrays
-> Not just delete
