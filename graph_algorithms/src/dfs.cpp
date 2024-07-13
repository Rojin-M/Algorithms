#include "dfs.h"

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v) {
    std::vector<bool> visited(V, false); // Mark all vertices as not visited
    DFSUtil(v, visited); // Call the recursive helper function to print DFS traversal
}

void Graph::DFSUtil(int v, std::vector<bool> &visited) {
    // Mark the current node as visited and print it
    visited[v] = true;
    std::cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!visited[*i]) {
            DFSUtil(*i, visited);
        }
    }
}
