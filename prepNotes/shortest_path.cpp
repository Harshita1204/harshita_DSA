#include <bits/stdc++.h>
using namespace std;

int shortestPath(
    int V,
    vector<vector<pair<int,int>>> &adj,
    int source,
    int destination
) {

    const int INF = INT_MAX;

    vector<int> dist(V, INF);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[source] = 0;

    pq.push({0, source});

    while (!pq.empty()) {

        auto [currentDist, u] = pq.top();
        pq.pop();

        if (currentDist != dist[u])
            continue;

        if (u == destination)
            return currentDist;

        for (auto [v, weight] : adj[u]) {

            if (dist[u] + weight < dist[v]) {

                dist[v] = dist[u] + weight;

                pq.push({dist[v], v});
            }
        }
    }

    return -1;
}  