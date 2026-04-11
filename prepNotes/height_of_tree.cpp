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

//find height of tree
int height(Node* root){
    if(root==NULL) return 0;

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    if(leftHeight>rightHeight)
        return leftHeight+1;
    else
        return rightHeight+1;
}

int main(){
    Node* root=createNode(10);
    root->left=createNode(5);
    root->right=createNode(20);
    cout<<"Height = "<<height(root);
}