#include<iostream>
using namespace std;
class stack{
    private:
    int arr[6];
    int top;

 public:
 stack() {
        top = -1;   
    }

    // Push function
    void push(int value) {

        if (top == 4) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " pushed into stack\n";
    }

    // Pop function
    void pop() {

        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << arr[top] << " popped from stack\n";
        top--;
    }
};

    int main(){
        stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);

        s.pop();
        return 0;
    }
//output:
//10 pushed into stack
//20 pushed into stack
//30 pushed into stack
//40 pushed into stack
//40 popped from stack
    