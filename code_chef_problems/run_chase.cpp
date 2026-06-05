#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,r;
	cin>>n>>r;
	
	r = (n/20)+1; // n/20 = to find the runs , and +1 to get more from the other team .
	cout<<r;
	return 0;
}