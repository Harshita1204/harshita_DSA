#include <iostream>
using namespace std;

#define SIZE 5

class Stack {

    int arr[SIZE];
    int top;

    public:

    Stack() {
        top = -1;
    }

    // Push Operation
    void push(int value) {

        if(top == SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " inserted" << endl;
    }

    // Pop Operation
    void pop() {

        if(top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[top] << " deleted" << endl;
        top--;
    }

    // Peek Operation
    void peek() {

        if(top == -1) {
            cout << "Stack Empty";
            return;
        }

        cout << "Top Element: " << arr[top] << endl;
    }

    // Display Stack
    void display() {

        if(top == -1) {
            cout << "Stack Empty";
            return;
        }

        cout << "Stack Elements:" << endl;

        for(int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.peek();

    return 0;
}