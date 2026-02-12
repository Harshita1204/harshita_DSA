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
// Insert at position
void insertAtPosition(node* &head, int position, int d){
    // if u want to insert at head using this function
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
        }
    // creating a new node for d
    node* nodetoinsert =new node(d);
    nodetoinsert->next =temp->next;
    temp->next=nodetoinsert;
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
     insertAtPosition(head,3,234);
     print(head);
    return 0;
