#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int a =  num; // copy of num 
    cout<<" a before: "<<num<<endl; //5
    a++;
    cout<<"value of a :"<<a<<endl; //6
    cout<<" a after: "<<num<<endl; //5

    int *p =&num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after : "<<num<<endl;

    int *q=p; // creating a copy of a pointer
   cout<<p<<"-"<<q<<endl;
   cout<<*p<<"-"<<*q<<endl;
   (*q)++;
   cout<<*q<<endl;
   cout<<*p<<endl;
   (*p)++;
   cout<<*q<<endl;
   cout<<*p<<endl;

}