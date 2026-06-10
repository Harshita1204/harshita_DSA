#include<iostream>
#include<stack>
using namespace std;
class Solution{
public:
    bool isValid(string s){
            stack<char> t; // make stack to store opening brackets
        for(int i=0;i<s.length();i++){
            char ch=s[i];

            if(ch=='(' || ch=='{' || ch=='['){ // if u find any opening bracket then push in to the stack
                t.push(ch);
            }else{

                if(t.empty()){
                    return false;
                }

                char top=t.top();
                t.pop();

                // if the brackets are mismatched
                if(ch==')' && top!='('){ 
                    return false;
                }

                if(ch=='}' && top!='{'){
                    return false;
                }

                if(ch==']' && top!='['){
                    return false;
                }
            }
        }
        //if stack is emoty that means all the brackets are successfully matched correctly
        if(t.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Solution obj;
    string s;
    cin>>s;
    if(obj.isValid(s)){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }
    return 0;
}