#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    
	    int a[101];
	    int sum =0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int result=0;
	    for(int i =0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]+a[j]>2*k-sum){
	                result++;
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;

}
