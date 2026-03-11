#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

class bst{
private:
    node* root;

public:

    //constructor
    bst(){
        root = NULL;
    }

    node* insert(node* nodePtr, int value){

        if(nodePtr == NULL){
            return new node(value);
        }

        if(value < nodePtr->data){
            nodePtr->left = insert(nodePtr->left,value);
        }
        else if(value > nodePtr->data){
            nodePtr->right = insert(nodePtr->right,value);
        }

        return nodePtr;
    }

    //wrapper insert
    void insertValue(int value){
        root = insert(root,value);
    }

    bool search(node* nodePtr, int value){

        if(nodePtr == NULL){
            return false;
        }

        if(nodePtr->data == value){
            return true;
        }

        if(value < nodePtr->data){
            return search(nodePtr->left,value);
        }

        return search(nodePtr->right,value);
    }

    //inorder traversal
    void inorder(node* nodePtr){

        if(nodePtr == NULL){
            return;
        }

        inorder(nodePtr->left);
        cout << nodePtr->data << " ";
        inorder(nodePtr->right);
    }

    //wrapper for inorder
    void display(){
        inorder(root);
    }
};

int main(){

    bst tree;

    tree.insertValue(50);
    tree.insertValue(30);
    tree.insertValue(70);
    tree.insertValue(20);
    tree.insertValue(40);
    tree.insertValue(60);
    tree.insertValue(80);
    tree.insertValue(90);
    tree.insertValue(100);

    cout << "Inorder traversal: ";

    tree.display();

    return 0;
}