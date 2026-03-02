#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at End
    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        // Case 1: List is empty
        if(head == NULL) {
            head = newNode;
            return;
        }

        // Case 2: List is not empty
        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display List
    void display() {

        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " → ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.display();

    return 0;
}