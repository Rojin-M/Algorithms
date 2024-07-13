#ifndef DFS_H
#define DFS_H

#include <vector>
#include <iostream>
#include <list>

class Graph {
public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // Function to add an edge to graph
    void DFS(int v); // DFS traversal function

private:
    int V; // Number of vertices
    std::vector<std::list<int>> adj; // Adjacency lists
    void DFSUtil(int v, std::vector<bool> &visited); // Utility function for DFS
};

#endif // DFS_H
