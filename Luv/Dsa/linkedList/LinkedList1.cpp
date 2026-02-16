#include<iostream>
using namespace std;
// creation and searching in the linked list
struct node{
    int info; // multiple elements/ variables can work in one node
    node *link;
};
int main(){
    int item,n,i;
    node *ptr,*start;
    
    cout<<"Enter the number of nodes";
    cin>>n;
    ptr = new node;
    start = ptr;

     for(int i=1;i<=n;i++){
        cout<<"enter node number of the list";
        cin>>item;
        ptr->info=item;
        if(i==n){ // if the i reaches to the end which is n then the ptr will point to NULL
            ptr->link=NULL;
        }
        else{
            ptr->link=new node; // otherwise it will point to the next node 
            ptr=ptr->link;
        }
     }
     ptr = start;
     while(ptr!=NULL){
        cout<<ptr->info;
        ptr=ptr->link;
        return 0;
     }
}