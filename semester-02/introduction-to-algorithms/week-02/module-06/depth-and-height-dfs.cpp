#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjList[N]; // Adjacency list to represent the graph
bool visited[N];        // To keep track of visited nodes during DFS traversal
int depth[N];           // To store the depth of each node in the DFS tree
int height[N];          // To store the height of each node in the DFS tree

// Depth-first search (DFS) function to traverse the graph and calculate depth and height
void dfs(int parent)
{
    visited[parent] = true; // Mark the current node (parent) as visited

    // Traverse through the children of the parent node
    for (int child : adjList[parent])
    {
        if (!visited[child]) // If the child node is not visited
        {
            depth[child] = depth[parent] + 1; // Update the depth of the child node
            dfs(child);                       // Recursively visit the child node
            // Calculate the height of the parent based on the maximum height of its children
            height[parent] = max(height[parent], height[child] + 1);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // Input the number of nodes (n) and edges (m)

    // Input the edges and build the adjacency list representation of the graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Since the graph is undirected
    }

    dfs(1); // Start DFS traversal from node 1 as the root

    // Output the depth of each node after DFS traversal
    cout << "Depth of nodes:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << depth[i] << endl;
    }

    // Output the height of each node after DFS traversal
    cout << "Height of nodes:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << height[i] << endl;
    }

    return 0;
}
