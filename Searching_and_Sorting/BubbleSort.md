# Bubble Sort 

## What is Bubble Sort?
Bubble Sort is a simple sorting method.  
It sorts the array by comparing two neighboring elements again and again.  
If the elements are in the wrong order, it swaps them.  
After each round or pass, the largest element goes to the end of the array.

## How Bubble Sort Works 
Bubble Sort compares the first element with the next element and swaps them if the first element is bigger.  
Then it moves one step forward and repeats the same process.  
This continues until the array becomes completely sorted.

## Important Point About Comparison
Bubble Sort only compares adjacent elements.  
This means it compares the element at index j with the element at index j+1 .  
It does not skip elements or compare alternate values.  
This step by step comparison is what slowly pushes the largest value to the end.

## Example to Understand Bubble Sort
Consider the array:  
5 1 4 2 8

In the first pass, Bubble Sort compares 5 and 1 and swaps them, then compares 5 and 4 and swaps them, then compares 5 and 2 and swaps them, and finally compares 5 and 8 and does not swap.  
After the first pass, the array becomes:  
1 4 2 5 8  

Now the largest element 8 is already placed at the end of the array.

## Why We Use n - i - 1 in Bubble Sort
Here n is the total number of elements in the array and i represents the number of passes completed.  
After each pass, one largest element is fixed at the end of the array.  
After the first pass, the last one element is sorted.  
After the second pass, the last two elements are sorted.  
Because of this, we do not need to compare those elements again.  
That is why the inner loop runs only till n minus i minus one, which helps avoid unnecessary comparisons.

## Key Line in Bubble Sort Code
if (arr[j] > arr[j + 1])

This line shows that Bubble Sort compares two neighboring elements and swaps them if they are in the wrong order.

## Time and Space Complexity
The time complexity of Bubble Sort is O(n^2) because it uses two loops.  
The space complexity is O(1) because no extra memory is used.  
Bubble Sort is easy to understand and implement, but it is not efficient for large arrays.
