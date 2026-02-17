#include<iostream>
#include<stack>
using namespace std;
class Stack{
    // properties
    public:
    int *arr; // allows dynamic memory allocation
    int top;
    int size;

    // behavior
    Stack(int size){
        this->size=size; 
        arr=new int[size]; // new allocated memory in heap memory, it returns the address of first element, that address is stored in pointer arr
        top=-1;
    }
    void push(int element){
        if(size-top>1){ // if top == size-1 , stack is full
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);

     st.push(43);
     st.push(34);
     st.push(56);

     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     
     return 0;
}