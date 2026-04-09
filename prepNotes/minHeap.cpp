#include<iostream>
using namespace std;
class minHeap{
    int *arr; // dynamic array
    int size;
    int total_size;

    public:
    minHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }
    void insert(int val){
        if(size== total_size){
            cout<<"heap overflow";
            return;
        }
        arr[size]=val;
        int index=size;
        size++;

        while(index>0 && arr[(index-1)/2] >arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }
        cout<<val <<" Inserted in heap"<<endl;
    }
    void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
};

int main (){
    minHeap h1(10);
    h1.insert(92);
    h1.insert(74);
    h1.insert(93);
    h1.insert(49);
    h1.insert(87);
    h1.insert(76);
    h1.insert(23);
    h1.insert(33);

    h1.print();

}