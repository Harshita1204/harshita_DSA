#include <iostream>
using namespace std;

#define SIZE 5

class Stack {

    int arr[SIZE];
    int top;

    public:
    Stack() { // constructor
        top = -1; // initially stack is empty
    }

    // Push Operation
    void push(int value) {

        if(top == SIZE - 1) { // checks if stack is full
            cout << "Stack Overflow" << endl;
            return;
        }

        top++; // increase top position
        arr[top] = value; // insert value at top position

        cout << value << " inserted" << endl;
    }

    // Pop Operation -> removes top element
    void pop() {

        if(top == -1) { // check if stack is empty 
            cout << "Stack Underflow" << endl; 
            return;
        }
      // print deleted element
        cout << arr[top] << " deleted" << endl; 
        top--;
    }

    // Peek Operation -> displays top element
    void peek() {
        // checks if stack is empty
        if(top == -1) {
            cout << "Stack Empty";
            return;
        }
        // print top element
        cout << "Top Element: " << arr[top] << endl;
    }

    // Display Stack -> shows all stack operations
    void display() {
        // checks if the stack is empty
        if(top == -1) {
            cout << "Stack Empty";
            return;
        }

        cout << "Stack Elements:" << endl;
        // print the elements from top to bottom
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
   // stack object
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.peek();

    return 0;
}