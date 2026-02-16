#include<iostream>
using namespace std;
void update(int n){
    n++;
}
void update2(int& n){   // pass by reference
    n++;
}
int main(){
    int n=5;
    cout<<"before update: "<<n<<endl; //5
    update(n);
    cout<<"after update: "<<n<<endl; //5
    cout<<endl;

    cout<<"before update: "<<n<<endl; //5
    update2(n);  
    cout<<"after update: "<<n<<endl; //6 value is updated here as we used pass by reference now !! 
    return 0;
}
