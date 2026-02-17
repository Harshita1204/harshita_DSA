#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack <int> s;

    // operations on stack

    // push operation
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(7);

    //pop operation
    s.pop();
    
    // top element /peek
    cout<<"printing top element: "<<s.top()<<endl;

    // check is stack empty or not
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    // size of stack
    cout<<"size of stack is: "<<s.size()<<endl;

}