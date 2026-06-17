#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int ans=m;
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=m;j++){
	            int points = 3*i+j; // as 3 points if win , 1 for draw , 0 for lose , we dont need to add lose = 0 
	            if(points==n){
	                int loses = m-i-j;  // total = m +wins+loses+draws , loses =m-wins-draws
	                
	                if(loses>=0){
	                    ans=min(ans,loses); // we want to find the minimum loses 
	            }
	        }
	    }
	    }
	    cout<<ans<<endl;
	}

return 0;
}
