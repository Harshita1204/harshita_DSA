#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

bool search(Node* root,int key){
    //if tree empty
    if(root==NULL) return false;

    //if value found
    if(root->data==key) return true;

    //search left
    if(key<root->data)
        return search(root->left,key);
    else
        //search right
        return search(root->right,key);
}

int main(){
    Node* root=createNode(10);
    root->left=createNode(5);
    root->right=createNode(20);

    if(search(root,20))
        cout<<"Value found";
    else
        cout<<"Value not found";
}