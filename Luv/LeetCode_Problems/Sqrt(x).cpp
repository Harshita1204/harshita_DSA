#include <iostream>
using namespace std;

class solution{
    public:
    int binarySearch(int n){
        int s = 0;
        int e = n; // because we only have to go till the n value
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
int mySqrt(int x){
    return binarySearch(x);
 }
};
int main(){
    solution obj;
    int x;
    cout<<"Enter number: ";
    cin>>x;
    cout<<"Square root is: "<<obj.mySqrt(x)<<endl;
    return 0;
}
