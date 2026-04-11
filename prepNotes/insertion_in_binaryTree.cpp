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

//insert value in BST
Node* insert(Node* root,int value){
    //if tree empty make new node root
    if(root==NULL) return createNode(value);

    //go left if value smaller
    if(value<root->data)
        root->left=insert(root->left,value);
    else
        //go right if value bigger
        root->right=insert(root->right,value);

    return root;
}

int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,20);
    root=insert(root,3);
    cout<<"Nodes inserted";
}