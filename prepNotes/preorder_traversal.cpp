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

//visit root first
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root=createNode(10);
    root->left=createNode(5);
    root->right=createNode(20);
    preorder(root);
}