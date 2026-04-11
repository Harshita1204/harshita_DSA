#include<iostream>
using namespace std;

class maxHeap{
    int *arr; // dynamic array to store heap elements
    int size; // current number of elements in heap
    int total_size; // maximum capacity of heap

public:
    maxHeap(int n){ // constructor
        arr=new int[n];
        size=0; // heap initially empty
        total_size=n;
    }

    void insert(int val){ // insert element in heap
        if(size==total_size){
            cout<<"Heap overflow"<<endl;
            return;
        }

        arr[size]=val; // insert at last position
        int index=size;
        size++;

        // heapify up
        while(index>0 && arr[(index-1)/2] < arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<val<<" inserted"<<endl;
    }

    void heapify(int index){ // heapify down function
        int largest=index;
        int left=2*index+1; // left child
        int right=2*index+2; // right child

        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }

        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }

        if(largest!=index){
            swap(arr[index],arr[largest]);
            heapify(largest); // recursively fix heap
        }
    }

    void deleteRoot(){ // delete maximum element (root)
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }

        cout<<"Deleted element: "<<arr[0]<<endl;

        arr[0]=arr[size-1]; // move last element to root
        size--; // reduce heap size

        heapify(0); // restore heap property
    }

    void print(){ // print heap elements
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    maxHeap h1(10);

    h1.insert(92);
    h1.insert(74);
    h1.insert(93);
    h1.insert(49);
    h1.insert(87);
    h1.insert(76);
    h1.insert(23);
    h1.insert(33);

    cout<<"Heap elements:"<<endl;
    h1.print();

    cout<<endl;

    h1.deleteRoot();

    cout<<"Heap after deletion:"<<endl;
    h1.print();
} 