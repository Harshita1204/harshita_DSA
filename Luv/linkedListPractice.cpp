#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    // constructor
node(int data){
    this->data=data;
    this->next=NULL;
  }
};
// insert at head
void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;  
}
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next=temp;
    tail=temp;
}
void printList(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
   node* head = new node(10);
   node* tail = head;

   insertAtHead(head,34);
   insertAtHead(head,78);
   insertAtHead(head,99);
   insertAtHead(head,14);
   printList(head);
   insertAtTail(tail,66);
   printList(head);
}
