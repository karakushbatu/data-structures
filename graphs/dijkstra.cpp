#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii;

void dijkstra(int start, vector<vector<pii>>& graph, vector<int>& dist) {
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, node] = pq.top(); pq.pop();
        if (d > dist[node]) continue;

        for (auto [neighbor, weight] : graph[node]) {
            if (dist[node] + weight < dist[neighbor]) {
                dist[neighbor] = dist[node] + weight;
                pq.push({dist[neighbor], neighbor});
            }
        }
    }
}

int main() {
    int V = 5;
    vector<vector<pii>> graph(V);
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 7});
    graph[2].push_back({4, 3});
    graph[3].push_back({4, 1});

    vector<int> dist(V, 1e9);
