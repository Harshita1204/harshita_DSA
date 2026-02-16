# Selection Sort 

## What is Selection Sort?
Selection Sort is a simple sorting method.  
It works by finding the smallest element from the unsorted part of the array and placing it at the correct position.  
In every pass, one element is selected and placed at its proper position.

## How Selection Sort Works 
Selection Sort divides the array into two parts: sorted part and unsorted part.  
At the beginning, the sorted part is empty and the unsorted part contains all elements.  
In each pass, the smallest element from the unsorted part is selected and swapped with the first element of the unsorted part.

## Important Point About Comparison
Selection Sort compares one element with all other elements in the unsorted part to find the minimum value.  
It does not compare adjacent elements like Bubble Sort.  
Only one swap happens in each pass.

## Example to Understand Selection Sort
Consider the array:  
5 1 4 2 8

First Pass:  
The smallest element is 1.  
Swap 5 and 1.  
Array becomes:  
1 5 4 2 8  

Second Pass:  
Now the smallest element in the remaining array is 2.  
Swap 5 and 2.  
Array becomes:  
1 2 4 5 8  

Third Pass:  
The smallest element is 4, which is already in the correct position.  
Array remains the same.

After all passes, the array becomes sorted.

## Why Selection Sort Uses n - 1 Passes
In Selection Sort, after each pass, one element is placed in its correct position.  
So after n - 1 passes, all elements are sorted.  
The last element automatically comes to its correct place, so no extra pass is needed.

## Key Line in Selection Sort Code
if (arr[j] < arr[minIndex])

This line helps in finding the smallest element in the unsorted part of the array.

## Time and Space Complexity
The time complexity of Selection Sort is O(n squared) because it uses two loops.  
The space complexity is O(1) because it does not use extra memory.  
Selection Sort is easy to understand but is not suitable for large arrays.
