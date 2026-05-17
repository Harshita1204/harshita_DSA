#include <iostream>
using namespace std;

#define SIZE 100

class Stack {

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

    bool empty() {
        return top == -1;
    }
};

bool checkBalanced(string str) {

    Stack s;

    for(int i = 0; i < str.length(); i++) {

        char ch = str[i];

        if(ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        else {

            if(s.empty()) {
                return false;
            }

            char top = s.pop();

            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')) {

                return false;
            }
        }
    }

    return s.empty();
}

int main() {

    string str = "({[]})";

    if(checkBalanced(str)) {
        cout << "Balanced";
    } else {
        cout << "Not Balanced";
    }

    return 0;
}