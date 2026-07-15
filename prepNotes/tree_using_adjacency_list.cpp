#include <bits/stdc++.h>
using namespace std;
void dfs(int node, int parent, vector<int> adj[]) {
    cout << node << " ";
    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node, adj);
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0, adj);
}