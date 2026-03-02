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

    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void deleteAtEnd() {

        // Case 1: Empty list
        if(head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        // Case 2: Only one node
        if(head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        // Case 3: More than one node
        Node* temp = head;

        while(temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;      // delete last node
        temp->next = NULL;      // make second last node last
    }

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

    cout << "Original List: ";
    list.display();

    list.deleteAtEnd();

    cout << "After deleting last node: ";
    list.display();

    return 0;
}