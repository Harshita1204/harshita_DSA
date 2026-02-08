#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator - &
    cout<<"Address of the num is :"<<&num<<endl;

     int *ptr=&num;
     cout<<"value of num is:"<<*ptr<<endl; // it will get the value of num
     cout<<"value of num is :"<<num<<endl; // it will also get the value of the num
}
