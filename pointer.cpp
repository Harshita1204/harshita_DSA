#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,7,9,13,43};
    cout<<"Address of first memory block is: "<<arr<<endl; // will print the address at the first location
    cout<<"value :"<<arr[0]<<endl; // will print the value at the first location
    cout<<"address at the first memory block is: "<<&arr[0]<<endl; // will also print the address at the first location
    cout<<*arr<<endl;  // 2
    cout<<*arr+1<<endl; // *arr =2 ; *arr+1 = 2+1=3;
    cout<<*(arr+1)<<endl; // (arr+1) is the 1st location and *arr+1 is the value at the first location // 5
    cout<<(*arr)+1<<endl; // (*arr) is the value at the 0th index that is 2 , 2+1 = 3
    cout<<*(arr)+1<<endl; //3


}
