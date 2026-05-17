// example: A+B*C 
// output -> ABC*+
#include <iostream>
using namespace std;

#define SIZE 100

class Stack { // stack is used to store operators

    char arr[SIZE];
    int top;

    public:

    Stack() {
        top = -1;
    }

    void push(char ch) {
        arr[++top] = ch;
    }

    char pop() {
        return arr[top--];
    }

    char peek() {
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int precedence(char op) {

    if(op == '+' || op == '-') {
        return 1;
    }

    if(op == '*' || op == '/') {
        return 2;
    }

    return 0;
}

int main() {

    string exp = "A+B*C";

    Stack s;

    string result = "";

    for(int i = 0; i < exp.length(); i++) {

        char ch = exp[i];

        if(isalnum(ch)) {
            result += ch;
        }

        else {

            while(!s.empty() &&
                  precedence(s.peek()) >= precedence(ch)) {

                result += s.pop();
            }

            s.push(ch);
        }
    }

    while(!s.empty()) {
        result += s.pop();
    }

    cout << "Postfix: " << result;

    return 0;
}