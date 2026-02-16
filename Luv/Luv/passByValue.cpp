#include<iostream>
using namespace std;
// function pass by value
void update(int num){
    num=num+10;
    cout<<"value inside the update function: "<<num<<endl; //15
}
int main(){
    int x=5;
    cout<<"value before calling update: "<<x<<endl; //5
    update(x);
    cout<<"value after calling update: "<<x<<endl; //5
    return 0;
} 

// reason: 
//  In main(), x = 5
//When we call update(x), a copy of x is created.
//Inside update(), that copy becomes num.
//num = num + 10 → so num = 15
//But this change is only in the copy, not the original x.
//After function ends, the copy is destroyed.
//So x is still 5 in main()
