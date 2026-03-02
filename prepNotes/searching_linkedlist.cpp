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

    // 🔍 Search Function
    bool search(int key) {

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data == key) {
                return true;   // Found
            }

            temp = temp->next;  // Move forward
        }

        return false;  // Not found
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
    list.insertAtEnd(40);

    list.display();

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if(list.search(key))
        cout << "Value Found!" << endl;
    else
        cout << "Value Not Found!" << endl;

    return 0;
}