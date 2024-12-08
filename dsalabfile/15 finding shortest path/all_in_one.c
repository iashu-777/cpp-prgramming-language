// 1) Algorithm Dijkstra(graph, src, vertices)
// 2) Pre: graph is an adjacency matrix, src is the source vertex
// 3) Post: Shortest path from the source to all other vertices is calculated
// 4) Initialize dist[vertices] ← ∞ for all vertices
// 5) Initialize visited[vertices] ← 0 (not visited)
// 6) dist[src] ← 0
// 7) for count ← 0 to vertices - 1 do
// 8)     Find the vertex u with the minimum dist[u] that has not been visited
// 9)     visited[u] ← 1
// 10)    for each adjacent vertex v of u do
// 11)        if graph[u][v] ≠ 0 and visited[v] = 0 and dist[u] + graph[u][v] < dist[v] then
// 12)            dist[v] ← dist[u] + graph[u][v]
// 13)        end if
// 14)    end for
// 15) end for
// 16) Print the shortest distance from the source to all vertices
// 17) end Dijkstra

// 1) Algorithm FloydWarshall(graph, vertices)
// 2) Pre: graph is an adjacency matrix
// 3) Post: Shortest path matrix for all pairs of vertices is computed
// 4) Initialize dist[vertices][vertices] ← graph
// 5) for k ← 0 to vertices - 1 do
// 6)     for i ← 0 to vertices - 1 do
// 7)         for j ← 0 to vertices - 1 do
// 8)             if dist[i][j] > dist[i][k] + dist[k][j] then
// 9)                 dist[i][j] ← dist[i][k] + dist[k][j]
// 10)            end if
// 11)        end for
// 12)    end for
// 13) end for
// 14) Print the shortest distance matrix
// 15) end FloydWarshall

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 10

// Function to implement Dijkstra’s Algorithm for shortest path
void dijkstra(int graph[MAX][MAX], int src, int vertices) {
    int dist[vertices];
    int visited[vertices];
    
    // Initialize the distance array
    for (int i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    
    dist[src] = 0; // Distance from source to itself is 0
    
    for (int count = 0; count < vertices - 1; count++) {
        // Find the minimum distance vertex
        int u = -1;
        int minDist = INT_MAX;
        for (int v = 0; v < vertices; v++) {
            if (!visited[v] && dist[v] < minDist) {
                minDist = dist[v];
                u = v;
            }
        }
        
        // Mark the vertex as visited
        visited[u] = 1;
        
        // Update the distances of adjacent vertices
        for (int v = 0; v < vertices; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the shortest distances from source
    printf("Dijkstra’s Shortest Path from Vertex %d: \n", src);
    for (int i = 0; i < vertices; i++) {
        printf("Vertex %d: %d\n", i, dist[i]);
    }
}

// Function to implement Floyd-Warshall’s Algorithm
void floydWarshall(int graph[MAX][MAX], int vertices) {
    int dist[vertices][vertices];
    
    // Initialize the distance matrix with the graph values
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (i == j) dist[i][j] = 0;
            else if (graph[i][j] != 0) dist[i][j] = graph[i][j];
            else dist[i][j] = INT_MAX;
        }
    }
    
    // Floyd-Warshall algorithm
    for (int k = 0; k < vertices; k++) {
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                if (dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    // Print the shortest distance matrix
    printf("Floyd-Warshall Shortest Path Matrix: \n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (dist[i][j] == INT_MAX) 
                printf("INF ");
            else 
                printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[MAX][MAX] = {
        {0, 10, 0, 0, 0, 0},
        {10, 0, 5, 0, 0, 0},
        {0, 5, 0, 20, 0, 0},
        {0, 0, 20, 0, 15, 0},
        {0, 0, 0, 15, 0, 30},
        {0, 0, 0, 0, 30, 0}
    };
    int vertices = 6;

    // Run Dijkstra’s Algorithm for shortest path
    dijkstra(graph, 0, vertices);

    // Run Floyd-Warshall’s Algorithm for shortest path matrix
    floydWarshall(graph, vertices);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
