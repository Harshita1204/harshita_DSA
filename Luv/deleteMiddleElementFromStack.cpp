#include <iostream>
#include <stack>
using namespace std;

// This function does the real recursive work
void solve(stack<int>& st, int count, int size) {

    // If we reach the middle element
    if(count == size/2) {
        st.pop();          // delete middle element
        return;            // stop recursion
    }

    // Store top element
    int num = st.top();
    st.pop();

    // Go deeper in stack
    solve(st, count + 1, size);

    // After middle is deleted,
    // push back remaining elements
    st.push(num);
}

// This is just a helper function
void deleteMiddle(stack<int>& st, int size) {

    int count = 0;          // start counting from 0
    solve(st, count, size); // call recursive function
}

// Function to print stack without modifying original
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

    cout<<"Stack before deleting middle element:"<<endl;
    printStack(st);

    int size = st.size();
    deleteMiddle(st, size);

    cout << "Stack after deleting middle element:" << endl;
    printStack(st);

    return 0;
}
