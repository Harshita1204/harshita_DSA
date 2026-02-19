#include<iostream>
using namespace std;
int factorial(int n){
    // base case -> base base is mandatory in recursion
    // If n becomes 0, stop recursion
    // Factorial of 0 is 1
    if(n==0){
        return 1;
    }
     // Recursive case
    // n! = n * (n-1)!
    // Function keeps calling itself
    return n * factorial(n-1); 
}
int main(){
    int n;
    cout<<"enter the number u want the factorial for: "<<endl;
    cin>>n;
    int ans=factorial(n); // call recursive function
    cout<<ans<<endl;
    return 0;
}