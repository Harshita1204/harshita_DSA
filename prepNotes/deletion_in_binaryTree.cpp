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

//find smallest node
Node* minValue(Node* root){
    while(root->left!=NULL)
        root=root->left;
    return root;
}

Node* deleteNode(Node* root,int key){
    if(root==NULL) return root;

    if(key<root->data)
        root->left=deleteNode(root->left,key);
    else if(key>root->data)
        root->right=deleteNode(root->right,key);
    else{
        //node with one or no child
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;

        //node with two children
        Node* temp=minValue(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}

int main(){
    Node* root=createNode(10);
    root->left=createNode(5);
    root->right=createNode(20);
    root=deleteNode(root,5);
    cout<<"Node deleted";
}