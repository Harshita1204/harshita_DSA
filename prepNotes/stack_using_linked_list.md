// stack using linked list
// node class
class Node
{
public:

    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

//stack class(linked list)
class Stack
{
private:

    Node* top;

public:

    Stack()
    {
        top = NULL;
    }
}


// push (linked list)

void push(int value)
{
    Node* newNode = new Node(value);

    newNode->next = top;

    top = newNode;
}

// pop (linked list)

void pop()
{
    if(top == NULL)
    {
        cout<<"Stack Underflow\n";
        return;
    }

    Node* temp = top;

    top = top->next;

    delete temp;
}

// peek
int peek()
{
    if(top == NULL)
        return -1;

    return top->data;
}

// display

void display()
{
    Node* temp = top;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}