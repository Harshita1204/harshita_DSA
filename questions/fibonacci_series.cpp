#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int prev = 0;
    int curr = 1;

    if(n == 0){
        cout<<0;
        cout<<endl;
    }
    for(int i= 2; i<=n ;i++){
        int next = prev +curr;
        prev = curr;
        curr = next;
    }
    
    cout<<curr;
    return 0;
}