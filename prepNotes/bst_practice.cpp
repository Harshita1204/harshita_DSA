#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int value){
        data= value;
        left=NULL;
        right=NULL;
    }
};
class bst{
    private:
    node* root;

node* insertNode(node* current, int value){
    if(current== NULL){
        node* newNode= new node(value);
        return newNode;
    }
    // if value if smaller go to the left side of the tree
    if(value< current->data){
        current->left = insertNode(current->left, value);
    }
    else if(value>current->data){
        current->right=insertNode(current->right,value);
    }
    return current;
}
public:
    //constructor
    bst(){
        root= NULL;
    }
    //insert function
    void insert(int value){
        root = insertNode(root,value);
    }

    // inorder traversAL
    void inorder(node* current){
        if(current == NULL){
            return;
        }
            inorder(current->left);
            cout<<current->data<<" ";
            inorder(current->right);
        }
        void display(){
            inorder(root);
        }
    };

    int main(){
        bst tree;
        tree.insert(50);
        tree.insert(30);
        tree.insert(70);
        tree.insert(20);
        tree.insert(40);
        tree.insert(60);
        tree.insert(80);

        cout<<"inorder trversal";
        tree.display();
    }