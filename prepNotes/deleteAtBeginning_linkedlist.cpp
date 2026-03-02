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

    // Insert at End (for testing)
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

    // Delete at Beginning
    void deleteAtBeginning() {

        if(head == NULL) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        Node* temp = head;       // store first node
        head = head->next;       // move head forward
        delete temp;             // delete old first node
    }

    // Display list
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

    list.deleteAtBeginning();

    cout << "After deleting first node: ";
    list.display();

    return 0;
}