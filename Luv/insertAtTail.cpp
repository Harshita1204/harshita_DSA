#include<iostream>
using namespace std;

// Node class represents one box of the linked list
class node{
    public:
    int data;      // stores the value
    node* next;    // stores address of next node

    // constructor: runs when a node is created
    node(int data){
        this->data = data;   // put value inside node
        this->next = NULL;   // no next node yet
    }
};

// Function to insert a new node at the beginning
void insertAtHead(node* &head, int d){
    // create a new node with value d
    node* temp = new node(d);

    // new node points to current head
    temp->next = head;

    // head now points to new node
    head = temp;
}

// Function to insert a new node at tail
void insertAtTail(node* &tail, int d){
    // create new node
    node* temp= new node(d);
    tail->next=temp;
    tail=tail->next;
}

// Function to print linked list
void print(node* &head){
    node* temp = head;   // start from head

    // go through list until NULL
    while(temp != NULL){
        cout << temp->data << " ";  // print data
        temp = temp->next;          // move to next node
    }
    cout << endl;
}

int main(){
    // create first node
    node* node1 = new node(10);

    cout << node1->data << endl;  // prints 10
    cout << node1->next << endl;  // prints 0 / NULL

    // head points to first node
    node* head = node1;
    node* tail= node1;

    print(head);          // prints: 10
    insertAtHead(head,12);
    print(head);          // prints: 12 10

     insertAtTail(tail,34);
     insertAtTail(tail,98);
     insertAtTail(tail,78);
     print(head);
    return 0;
}
// output of this code
//10
//0
//10 
//12 10 
<<<<<<< HEAD
//12 10 34 98 78 
=======
//12 10 34 98 78 
>>>>>>> 83bc7eeebf6f550a0f6c70b84bd66e228825ee78
