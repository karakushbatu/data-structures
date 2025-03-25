#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0};
    adj[3] = {1, 4};
    adj[4] = {3};

    vector<bool> visited(V, false);
    cout << "DFS traversal: ";
    dfs(0, adj, visited);
    cout << endl;

    return 0;
}
