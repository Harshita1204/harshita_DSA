#include <iostream>
using namespace std;

class Node {

    public:

    int data;
    Node* left;
    Node* right;

    Node(int value) {

        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* search(Node* root, int key) {

    // Element not found
    if(root == NULL) {
        return NULL;
    }

    // Element found
    if(root->data == key) {
        return root;
    }

    // Search left subtree
    if(key < root->data) {
        return search(root->left, key);
    }

    // Search right subtree
    return search(root->right, key);
}

int main() {

    Node* root = new Node(50);

    root->left = new Node(30);
    root->right = new Node(70);

    Node* result = search(root, 70);

    if(result != NULL) {
        cout << "Element Found";
    } else {
        cout << "Element Not Found";
    }

    return 0;
}