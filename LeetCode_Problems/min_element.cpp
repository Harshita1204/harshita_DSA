#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v ={8,2,5,1,9};
    auto it= min_element(v.begin(),v.end());
    cout<<"value="<<*it<<endl;
    cout<<"index="<<it-v.begin()<<endl;
    return 0;
}