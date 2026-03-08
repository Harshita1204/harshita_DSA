#include<iostream>
using namespace std;

/* 
   Node class represents each element of the stack.
   Each node contains:
   1. data -> value stored
   2. next -> pointer to next node
*/

class Node
{
public:

    int data;      // stores the value
    Node* next;    // pointer to next node

    // constructor to initialize node
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};



/*
   Stack class
   Here the stack is implemented using linked list
   top pointer always points to the first node
*/

class Stack
{
private:

    Node* top;     // pointer to the top element of stack

public:

    // constructor
    Stack()
    {
        top = NULL;  // stack initially empty
    }



    // check if stack is empty
    bool isEmpty()
    {
        if(top == NULL)
            return true;
        else
            return false;
    }



    // PUSH operation
    // adds element to the top of stack

    void push(int value)
    {
        // create new node
        Node* newNode = new Node(value);

        // new node points to current top
        newNode->next = top;

        // update top to new node
        top = newNode;

        cout << value << " pushed into stack\n";
    }



    // POP operation
    // removes top element

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow (stack empty)\n";
            return;
        }

        // store top node temporarily
        Node* temp = top;

        // move top to next node
        top = top->next;

        cout << temp->data << " popped from stack\n";

        // delete old node
        delete temp;
    }

    
    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n";
            return -1;
        }

        return top->data;
    }


    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n";
            return;
        }

        Node* temp = top;

        cout<<"Stack elements:\n";

        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
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

    cout<<"Top element: "<<s.peek()<<endl;

    s.pop();

    s.display();

    return 0;
}