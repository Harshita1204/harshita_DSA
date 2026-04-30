#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kahnTopoSort(int v, vector<int>adj[]){
    //create indegree array
    vector<int>indegree(v,0);

    //fill indegree
    for(int i=0;i<v;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    //create queue
    queue<int> q;

    // push nodes with indegree 0
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //store result
    vector<int> topo;

    // bfs process
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);

        //reduce indegree of neighbours
        for(auto it: adj[node]){
            indegree[it]--;

            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    // check cycle 
    if(topo.size()!=v){
        cout<<"cycle detected! topological sort is not possible";
        return{}; // returning an empty vector
    }
    return topo;
}
int main(){
    int v= 6;
    vector<int>adj[v];

    //example graph
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<int> result = kahnTopoSort(v,adj);

    cout<<"topological sort";
    for(auto x:result){
        cout<<"x"<<" ";
    }
    return 0;
}