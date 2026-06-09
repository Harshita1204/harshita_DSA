#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int original = n; //store the number in original to compare it afterwards
    int sum =0;

    while(n>0){
        int digit = n%10; //this will give out the last digit 
        sum= sum+(digit*digit*digit); // find the cube of the last digit and add it in a sum
        n=n/10; // remove the last digit now as we have to find for the other digits too
    }
    if(sum == original){
        cout<<"Armstrong number"<<endl;
            }else{
                cout<<"not armstrong number";
            }
            return 0;
}