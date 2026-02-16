#include <iostream>
using namespace std;
    int sqrtInteger(int n){
        int s = 0;
        int e = n; 
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            int square = mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s = mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
double morePrecision(int n, int precision, int tempSol){
    double factor =1;
    double ans= tempSol; // integer part
    for(int i=0;i<precision;i++){
        factor=factor/10;  // 1/10 = 0.1 then 0.01 then 0.001
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    int tempSol = sqrtInteger(x);
    cout<<"Square root with more precision is: "<<morePrecision(x,3,tempSol)<<endl;
    return 0;
}
