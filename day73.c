#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];   // Adjacency matrix
int visited[MAX];    // Visited array
int n;               // Number of vertices

// DFS function
void dfs(int node) {
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int m; // number of edges

    scanf("%d %d", &n, &m);

    // Initialize adjacency matrix and visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        // Convert to 0-based index
        u--; 
        v--;

        adj[u][v] = 1;
        adj[v][u] = 1; // Undirected graph
    }

    // Start DFS from node 0
    dfs(0);

    // Check if all nodes are visited
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            printf("NOT CONNECTED\n");
            return 0;
        }
    }

    printf("CONNECTED\n");

    return 0;
}