#include<iostream>
using namespace std;
int main(){
    int arr[20]={3,52,27,98,6,73,21,67};

    cout<<"address of the first memory block in an array is: "<<arr<<endl; 
    cout<<"address of the first memory block in an array is : "<<&arr[0]<<endl;
    cout<<"value: "<<arr[0]<<endl; //3

    cout<<"1st: "<<*arr<<endl; //3
    cout<<"2nd: "<<*arr+1<<endl; //4
    cout<<"3rd: "<<*(arr+1)<<endl; //52
    cout<<"4th: "<<(*arr)+1<<endl; //4
    cout<<"5th: "<<*(arr)+1<<endl; //4

    cout<<arr[2]<<endl; //27  
    cout<<*(arr+2)<<endl; //27

    int i=3;
    cout<<i[arr]<<endl; // you can write in this way also , it wont throw any error
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 83bc7eeebf6f550a0f6c70b84bd66e228825ee78
