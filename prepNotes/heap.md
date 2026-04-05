#include <iostream>
using namespace std;

/* =========================================================
   HEAPS : INTRODUCTION
   A heap is a complete binary tree that follows heap property.

   Min Heap  : Parent <= Children
   Max Heap  : Parent >= Children

   Array Representation:
   Parent index = (i-1)/2
   Left child   = 2*i + 1
   Right child  = 2*i + 2
   ========================================================= */

class Heap
{
private:
    int arr[100];
    int size;

public:

/* =========================================================
   CONSTRUCTOR
   Initializes heap size
   ========================================================= */
    Heap()
    {
        size = 0;
    }

/* =========================================================
   HELPER FUNCTIONS
   ========================================================= */

    int parent(int i)
    {
        return (i-1)/2;
    }

    int leftChild(int i)
    {
        return 2*i + 1;
    }

    int rightChild(int i)
    {
        return 2*i + 2;
    }

/* =========================================================
   MIN HEAP INSERT OPERATION
   Insert element and move upward if heap property violated
   Time Complexity: O(log n)
   ========================================================= */

    void insertMinHeap(int value)
    {
        arr[size] = value;
        int i = size;
        size++;

        while(i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

/* =========================================================
   MAX HEAP INSERT OPERATION
   Parent must be greater than children
   Time Complexity: O(log n)
   ========================================================= */

    void insertMaxHeap(int value)
    {
        arr[size] = value;
        int i = size;
        size++;

        while(i != 0 && arr[parent(i)] < arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

/* =========================================================
   HEAPIFY FUNCTION
   Restores heap property downward
   Used in deletion and heap sort
   Time Complexity: O(log n)
   ========================================================= */

    void heapifyMin(int i)
    {
        int left = leftChild(i);
        int right = rightChild(i);
        int smallest = i;

        if(left < size && arr[left] < arr[smallest])
            smallest = left;

        if(right < size && arr[right] < arr[smallest])
            smallest = right;

        if(smallest != i)
        {
            swap(arr[i], arr[smallest]);
            heapifyMin(smallest);
        }
    }

    void heapifyMax(int i)
    {
        int left = leftChild(i);
        int right = rightChild(i);
        int largest = i;

        if(left < size && arr[left] > arr[largest])
            largest = left;

        if(right < size && arr[right] > arr[largest])
            largest = right;

        if(largest != i)
        {
            swap(arr[i], arr[largest]);
            heapifyMax(largest);
        }
    }

/* =========================================================
   DELETE ROOT FROM MIN HEAP
   Remove smallest element
   Steps:
   1 Replace root with last element
   2 Reduce size
   3 Heapify
   Time Complexity: O(log n)
   ========================================================= */

    int extractMin()
    {
        if(size == 0)
            return -1;

        int root = arr[0];

        arr[0] = arr[size-1];
        size--;

        heapifyMin(0);

        return root;
    }

/* =========================================================
   DELETE ROOT FROM MAX HEAP
   Removes largest element
   ========================================================= */

    int extractMax()
    {
        if(size == 0)
            return -1;

        int root = arr[0];

        arr[0] = arr[size-1];
        size--;

        heapifyMax(0);

        return root;
    }

/* =========================================================
   PRINT HEAP
   ========================================================= */

    void printHeap()
    {
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }

/* =========================================================
   HEAP SORT IMPLEMENTATION
   Uses Max Heap
   Time Complexity: O(n log n)
   ========================================================= */

    void heapSort(int a[], int n)
    {
        for(int i = n/2 - 1; i >= 0; i--)
            heapifyArray(a,n,i);

        for(int i = n-1; i >= 0; i--)
        {
            swap(a[0],a[i]);
            heapifyArray(a,i,0);
        }
    }

    void heapifyArray(int a[], int n, int i)
    {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left<n && a[left]>a[largest])
            largest = left;

        if(right<n && a[right]>a[largest])
            largest = right;

        if(largest!=i)
        {
            swap(a[i],a[largest]);
            heapifyArray(a,n,largest);
        }
    }
};


/* =========================================================
   MAIN PROGRAM
   Demonstrates all heap operations
   ========================================================= */

int main()
{
    Heap h;

    cout<<"Insert elements into Min Heap\n";

    h.insertMinHeap(20);
    h.insertMinHeap(10);
    h.insertMinHeap(30);
    h.insertMinHeap(5);
    h.insertMinHeap(15);

    h.printHeap();

    cout<<"\nExtract Min: "<<h.extractMin()<<endl;

    h.printHeap();


    cout<<"\nHeap Sort Example\n";

    int arr[6] = {12,11,13,5,6,7};
    int n = 6;

    h.heapSort(arr,n);

    cout<<"Sorted array:\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}


/* =========================================================
   PRIORITY QUEUE USING HEAP
   ---------------------------------------------------------
   Priority queues are implemented using heaps.

   Operations:
   Insert        : O(log n)
   Delete highest priority : O(log n)
   Peek          : O(1)

   Max Heap → highest priority element at root
   Min Heap → smallest priority element at root
   ========================================================= */


/* =========================================================
   BINOMIAL HEAP
   ---------------------------------------------------------
   A binomial heap is a collection of binomial trees.

   Properties:
   1 Each tree follows heap property
   2 Only one binomial tree of each degree
   3 Efficient merging of heaps

   Operations Complexity:
   Insert      : O(log n)
   Delete Min  : O(log n)
   Merge       : O(log n)
   ========================================================= */


/* =========================================================
   FIBONACCI HEAP
   ---------------------------------------------------------
   Advanced heap structure used in graph algorithms.

   Operations Complexity:

   Insert        : O(1)
   Find Minimum  : O(1)
   Decrease Key  : O(1)
   Delete        : O(log n)

   Used in:
   - Dijkstra's algorithm
   - Prim's algorithm
   ========================================================= */