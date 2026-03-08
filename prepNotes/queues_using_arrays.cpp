#include<iostream>
using namespace std;

class Queue
{
private:

    int arr[100];
    int front;
    int rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    bool isFull()
    {
        return (rear == 99);
    }

    void enqueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue Overflow\n";
            return;
        }

        if(front == -1)
            front = 0;

        rear++;

        arr[rear] = value;
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow\n";
            return;
        }

        front++;
    }

    int peek()
    {
        if(isEmpty())
            return -1;

        return arr[front];
    }

    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    cout<<"Front element: "<<q.peek();

}