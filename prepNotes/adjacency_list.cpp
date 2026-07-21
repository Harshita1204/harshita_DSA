#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 4;
    vector<vector<int>> adj(n + 1);
    // Adding  the edges 
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]){
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
}
