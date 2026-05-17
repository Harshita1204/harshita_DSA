#include <iostream>
using namespace std;

#define SIZE 100

class Stack {

    int arr[SIZE];
    int top;

    public:

    Stack() {
        top = -1;
    }

    void push(int value) {
        arr[++top] = value;
    }

    int pop() {
        return arr[top--];
    }
};

int main() {

    string exp = "23+5*";

    Stack s;

    for(int i = 0; i < exp.length(); i++) {

        char ch = exp[i];

        if(isdigit(ch)) {
            s.push(ch - '0');
        }

        else {

            int b = s.pop();
            int a = s.pop();

            switch(ch) {

                case '+':
                    s.push(a + b);
                    break;

                case '-':
                    s.push(a - b);
                    break;

                case '*':
                    s.push(a * b);
                    break;

                case '/':
                    s.push(a / b);
                    break;
            }
        }
    }

    cout << "Result: " << s.pop();

    return 0;
}