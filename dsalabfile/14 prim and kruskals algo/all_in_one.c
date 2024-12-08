// 1) Algorithm PrimMST(Graph)
// 2) Pre: Graph is represented as an adjacency matrix
// 3) Post: Minimum Spanning Tree (MST) is printed using Prim’s Algorithm
// 4) parent[vertex] ← -1
// 5) key[vertex] ← ∞ for all vertices
// 6) visited[vertex] ← 0 for all vertices
// 7) key[0] ← 0
// 8) for count ← 0 to vertices - 1 do
// 9)     Pick the vertex u with minimum key value from the set of vertices not yet included in MST
// 10)    visited[u] ← 1
// 11)    for each adjacent vertex v of u do
// 12)        if adjMatrix[u][v] ≠ 0 and visited[v] = 0 and adjMatrix[u][v] < key[v] then
// 13)            parent[v] ← u
// 14)            key[v] ← adjMatrix[u][v]
// 15)        end if
// 16)    end for
// 17) end for
// 18) Print the MST using the parent array
// 19) end PrimMST

// 1) Algorithm KruskalMST(Graph)
// 2) Pre: Graph is represented as an adjacency matrix
// 3) Post: Minimum Spanning Tree (MST) is printed using Kruskal’s Algorithm
// 4) Create an edge list from the adjacency matrix
// 5) Sort the edges in increasing order of their weight
// 6) parent[vertex] ← -1 for all vertices
// 7) for each edge (u, v) in the sorted edge list do
// 8)     x ← find(parent, u)
// 9)     y ← find(parent, v)
// 10)    if x ≠ y then
// 11)        Print edge (u, v) and its weight
// 12)        union(parent, x, y)
// 13)    end if
// 14) end for
// 15) end KruskalMST

// 1) Algorithm Find(parent, vertex)
// 2) Pre: parent is an array of size number of vertices
// 3) Post: Returns the root of the vertex
// 4) if parent[vertex] = -1 then
// 5)     return vertex
// 6) else
// 7)     return Find(parent, parent[vertex])
// 8) end if
// 9) end Find

// 1) Algorithm Union(parent, x, y)
// 2) Pre: parent is an array of size number of vertices, x and y are two vertices
// 3) Post: Merges the sets of x and y by making the root of one the parent of the other
// 4) xset ← Find(parent, x)
// 5) yset ← Find(parent, y)
// 6) parent[xset] ← yset
// 7) end Union

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 10

// Structure to represent an edge
typedef struct {
    int u, v, weight;
} Edge;

// Graph structure
typedef struct {
    int adjMatrix[MAX][MAX];
    int vertices;
} Graph;

// Function to initialize the graph
void initGraph(Graph* g, int vertices) {
    g->vertices = vertices;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            g->adjMatrix[i][j] = 0;
        }
    }
}

// Function to add an edge
void addEdge(Graph* g, int u, int v, int weight) {
    g->adjMatrix[u][v] = weight;
    g->adjMatrix[v][u] = weight;  // For undirected graph
}

// Prim’s Algorithm to find MST
void primMST(Graph* g) {
    int parent[MAX]; // Array to store MST
    int key[MAX];    // Key values to pick minimum weight edge
    int visited[MAX]; // To track vertices in MST

    for (int i = 0; i < g->vertices; i++) {
        key[i] = INT_MAX;
        visited[i] = 0;
    }

    key[0] = 0;  // Starting from the first vertex
    parent[0] = -1;

    for (int count = 0; count < g->vertices - 1; count++) {
        // Pick the minimum key vertex from the set of vertices not yet included in MST
        int min = INT_MAX, u = -1;
        for (int v = 0; v < g->vertices; v++) {
            if (!visited[v] && key[v] < min) {
                min = key[v];
                u = v;
            }
        }

        visited[u] = 1;

        // Update the key values of adjacent vertices
        for (int v = 0; v < g->vertices; v++) {
            if (g->adjMatrix[u][v] && !visited[v] && g->adjMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = g->adjMatrix[u][v];
            }
        }
    }

    // Print the MST
    printf("Prim's MST: \n");
    for (int i = 1; i < g->vertices; i++) {
        printf("%d - %d: %d\n", parent[i], i, g->adjMatrix[i][parent[i]]);
    }
}

// Kruskal’s Algorithm to find MST
int find(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}

void unionSet(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

void kruskalMST(Graph* g) {
    Edge edges[MAX * MAX];
    int edgeCount = 0;

    // Convert adjacency matrix to edge list
    for (int i = 0; i < g->vertices; i++) {
        for (int j = i + 1; j < g->vertices; j++) {
            if (g->adjMatrix[i][j] != 0) {
                edges[edgeCount].u = i;
                edges[edgeCount].v = j;
                edges[edgeCount].weight = g->adjMatrix[i][j];
                edgeCount++;
            }
        }
    }

    // Sort edges based on weight
    for (int i = 0; i < edgeCount - 1; i++) {
        for (int j = i + 1; j < edgeCount; j++) {
            if (edges[i].weight > edges[j].weight) {
                Edge temp = edges[i];
                edges[i] = edges[j];
                edges[j] = temp;
            }
        }
    }

    int parent[g->vertices];
    for (int i = 0; i < g->vertices; i++) {
        parent[i] = -1;
    }

    printf("Kruskal's MST: \n");
    for (int i = 0; i < edgeCount; i++) {
        int x = find(parent, edges[i].u);
        int y = find(parent, edges[i].v);

        // If including this edge does not cause a cycle
        if (x != y) {
            printf("%d - %d: %d\n", edges[i].u, edges[i].v, edges[i].weight);
            unionSet(parent, x, y);
        }
    }
}

int main() {
    Graph g;
    int vertices = 4;

    initGraph(&g, vertices);

    // Adding edges (u, v, weight)
    addEdge(&g, 0, 1, 10);
    addEdge(&g, 0, 2, 6);
    addEdge(&g, 0, 3, 5);
    addEdge(&g, 1, 3, 15);
    addEdge(&g, 2, 3, 4);

    // Prim's Algorithm
    primMST(&g);

    // Kruskal's Algorithm
    kruskalMST(&g);

    return 0;
}
