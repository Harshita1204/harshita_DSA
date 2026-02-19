#include <iostream>
#include <stack>
using namespace std;

// Recursive function to insert element at bottom
void insertAtBottom(stack<int>& st, int x) {

    // Base case: if stack is empty
    if(st.empty()) {
        st.push(x);
        return;
    }

    // Store top element
    int num = st.top();
    st.pop();

    // Recursive call
    insertAtBottom(st, x);

    // Push stored element back
    st.push(num);
}

void printStack(stack<int> st) {
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Stack before inserting at bottom:\n";
    printStack(st);

    insertAtBottom(st, 100);

    cout << "Stack after inserting 100 at bottom:\n";
    printStack(st);

    return 0;
}
