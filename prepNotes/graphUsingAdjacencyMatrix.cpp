#include <iostream>
using namespace std;
int main()
{
    int vertices = 4;  // total number of nodes
    // create matrix of size vertices x vertices
    int graph[4][4] = {0};  
    // add edges (connections)
    graph[0][1] = 1; // node 0 connected to node 1
    graph[1][0] = 1; // because graph is undirected

    graph[0][2] = 1; // node 0 connected to node 2
    graph[2][0] = 1;

    graph[1][3] = 1; // node 1 connected to node 3
    graph[3][1] = 1;

    graph[2][3] = 1; // node 2 connected to node 3
    graph[3][2] = 1;
    cout << "Adjacency Matrix:\n";
    // print matrix
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}