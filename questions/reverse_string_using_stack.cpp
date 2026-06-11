#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s = "Harshita";
    stack<char> st;

    for(int i =0; i<s.length();i++){
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty()){
        s[i]= st.top();
        st.pop();
        i++;
    }
        cout<<"Reversed string"<<" "<<s;
        return 0;
}
