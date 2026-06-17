#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	int a= x-y;
	int b=y-x;
	if(a <=2 && b<=2){
	    cout<<"Interesting"<<endl;
	}else{
	    cout<<"Boring";
	}
	return 0;

}