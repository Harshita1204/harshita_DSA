#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,8,2,10,1};
    int key=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not Found";
}