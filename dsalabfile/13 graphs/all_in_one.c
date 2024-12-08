// 1) Algorithm BFS(Graph, startVertex, vertices)
// 2) Pre: Graph is represented as an adjacency matrix, startVertex is the starting node
// 3) Post: All reachable vertices from startVertex are visited in BFS order
// 4) Queue ← empty
// 5) visited[startVertex] ← 1
// 6) Print startVertex
// 7) Enqueue(startVertex)
// 8) while Queue is not empty do
// 9)     currentVertex ← Dequeue()
// 10)    for each vertex i from 0 to vertices - 1 do
// 11)        if adjMatrix[currentVertex][i] = 1 and visited[i] = 0 then
// 12)            Enqueue(i)
// 13)            visited[i] ← 1
// 14)            Print i
// 15)        end if
// 16)    end for
// 17) end while
// 18) end BFS

// 1) Algorithm DFS(Graph, vertex, vertices)
// 2) Pre: Graph is represented as an adjacency matrix, vertex is the starting node
// 3) Post: All reachable vertices from vertex are visited in DFS order
// 4) visited[vertex] ← 1
// 5) Print vertex
// 6) for each vertex i from 0 to vertices - 1 do
// 7)     if adjMatrix[vertex][i] = 1 and visited[i] = 0 then
// 8)         DFS(Graph, i, vertices)
// 9)     end if
// 10) end for
// 11) end DFS

// 1) Algorithm initGraph(Graph, vertices)
// 2) Pre: vertices is the number of nodes in the graph
// 3) Post: Initializes the graph with vertices number of nodes
// 4) for i ← 0 to vertices - 1 do
// 5)     visited[i] ← 0
// 6)     for j ← 0 to vertices - 1 do
// 7)         adjMatrix[i][j] ← 0
// 8)     end for
// 9) end for
// 10) end initGraph

// 1) Algorithm addEdge(Graph, u, v)
// 2) Pre: Graph is initialized and u, v are valid vertices
// 3) Post: An undirected edge is added between vertex u and vertex v
// 4) adjMatrix[u][v] ← 1
// 5) adjMatrix[v][u] ← 1
// 6) end addEdge

// 1) Algorithm resetVisited(Graph, vertices)
// 2) Pre: Graph is initialized, vertices is the number of nodes
// 3) Post: Resets the visited array of the graph to unvisited
// 4) for i ← 0 to vertices - 1 do
// 5)     visited[i] ← 0
// 6) end for
// 7) end resetVisited

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Graph structure
typedef struct Graph {
    int adjMatrix[MAX][MAX];
    int visited[MAX];
} Graph;

// Function to initialize the graph
void initGraph(Graph* g, int vertices) {
    for (int i = 0; i < vertices; i++) {
        g->visited[i] = 0;
        for (int j = 0; j < vertices; j++) {
            g->adjMatrix[i][j] = 0;
        }
    }
}

// Add edge to the graph
void addEdge(Graph* g, int u, int v) {
    g->adjMatrix[u][v] = 1;
    g->adjMatrix[v][u] = 1; // For undirected graph
}

// BFS traversal
void BFS(Graph* g, int startVertex, int vertices) {
    int queue[MAX], front = 0, rear = -1;
    
    g->visited[startVertex] = 1;
    printf("BFS starting from vertex %d: ", startVertex);
    printf("%d ", startVertex);
    queue[++rear] = startVertex;

    while (front <= rear) {
        int currentVertex = queue[front++];
        
        for (int i = 0; i < vertices; i++) {
            if (g->adjMatrix[currentVertex][i] == 1 && !g->visited[i]) {
                queue[++rear] = i;
                g->visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

// DFS traversal (using recursion)
void DFS(Graph* g, int vertex, int vertices) {
    g->visited[vertex] = 1;
    printf("%d ", vertex);
    
    for (int i = 0; i < vertices; i++) {
        if (g->adjMatrix[vertex][i] == 1 && !g->visited[i]) {
            DFS(g, i, vertices);
        }
    }
}

// Reset the visited array
void resetVisited(Graph* g, int vertices) {
    for (int i = 0; i < vertices; i++) {
        g->visited[i] = 0;
    }
}

int main() {
    Graph g;
    int vertices = 5;
    
    initGraph(&g, vertices);

    // Adding edges
    addEdge(&g, 0, 1);
    addEdge(&g, 0, 2);
    addEdge(&g, 1, 3);
    addEdge(&g, 1, 4);
    
    // BFS Traversal
    resetVisited(&g, vertices);
    BFS(&g, 0, vertices);

    // DFS Traversal
    resetVisited(&g, vertices);
    printf("DFS starting from vertex 0: ");
    DFS(&g, 0, vertices);
    printf("\n");
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
