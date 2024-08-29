#include <bits/stdc++.h>
using namespace std;

// Function to return a list containing the DFS traversal of the graph.
// const int H = 10e5;
bool visit[10005];

void DFS(int src, vector<int> adj[])
{
    cout << src << " ";
    visit[src] = true;
    for (int child : adj[src])
    {
        if (!visit[child])
        {
            DFS(child, adj);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    memset(visit, false, sizeof(visit));
    DFS(0, adj);
}

int main()
{

    return 0;
}