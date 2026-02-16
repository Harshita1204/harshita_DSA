===============
Arrays in CPP :
===============
array: an array is a collection of elements of the same data type stored in contiguous memory locations.
It allows: -> storing multiple values using a single variable name.
           -> accessing elements using index

Syntax: int arr[5];
Example : int arr[5]={10,20,30,40,50};

## basic operations on array: 

1. traversal: traversal means visiting each element of the array exactly once.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements are:\n";

    // Traversing array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

Time complexity: O(n)
space complexity: O(1)

2. Array searching (linear search):  linear search checks each element one by one until the element is found.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found";

    return 0;
}

Worst Case time complexity → O(n)
Best Case time complexity→ O(1)
Space complexity → O(1)

3. Array insertion: to insert at a position: shift elements to right , place new element.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int element = 25;
    int position = 2;

    // Shift elements to right
    for(int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;

    cout << "Array after insertion:\n";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}


