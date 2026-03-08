#include<iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[100];

public:

    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    bool isFull()
    {
        return (top == 99);
    }

    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = value;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow\n";
            return;
        }

        top--;
    }

    int peek()
    {
        if(isEmpty())
            return -1;

        return arr[top];
    }

    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

}