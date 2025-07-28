#include <stdio.h>
#include <stdlib.h>
#define MAX_PROCESSES 10
#define MAX_RESOURCES 10
// Convert RAG matrix to WFG matrix
void convertToWFGMatrix(
    int rag[MAX_PROCESSES + MAX_RESOURCES][MAX_PROCESSES + MAX_RESOURCES],
    int wfg[MAX_PROCESSES][MAX_PROCESSES],
    int processes, int resources)
{
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < processes; j++)
        {
            wfg[i][j] = 0;
        }
    }
    for (int i = 0; i < processes; i++)
    {
        for (int j = processes; j < processes + resources; j++)
        {
            if (rag[i][j] == 1)
            { // Process i is requesting Resource j
                for (int k = 0; k < processes; k++)
                {
                    if (rag[j][k] == 1)
                    {                  // Resource j is allocated to Process k
                        wfg[i][k] = 1; // Process i is waiting for Process k
                    }
                }
            }
        }
    }
}
// Print a matrix
void printMatrix(int matrix[MAX_PROCESSES][MAX_PROCESSES], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
// Node for adjacency list
typedef struct Node
{
    int process;
    struct Node *next;
} Node;
// Add an edge to an adjacency list
void addEdge(Node *adjList[], int src, int dest)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->process = dest;
    newNode->next = adjList[src];
    adjList[src] = newNode;
} // Convert RAG list to WFG list
void convertToWFGList(Node *rag[], Node *wfg[], int processes, int resources)
{
    for (int i = 0; i < processes; i++)
    {
        wfg[i] = NULL;
    }
    for (int i = 0; i < processes; i++)
    {
        Node *temp = rag[i];
        while (temp != NULL)
        {
            int resource = temp->process;
            Node *temp2 = rag[resource];
            while (temp2 != NULL)
            {
                int process = temp2->process;
                addEdge(wfg, i, process);
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
    }
}
// Print adjacency list
void printList(Node *adjList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("P%d: ", i);
        Node *temp = adjList[i];
        while (temp != NULL)
        {
            printf("P%d -> ", temp->process);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int processes, resources;
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    printf("Enter the number of processes: ");
    scanf("%d", &processes);
    printf("Enter the number of resources: ");
    scanf("%d", &resources);
    int ragMatrix[MAX_PROCESSES + MAX_RESOURCES][MAX_PROCESSES +
                                                 MAX_RESOURCES];
    int wfgMatrix[MAX_PROCESSES][MAX_PROCESSES];
    // Input RAG adjacency matrix
    printf("Enter the RAG adjacency matrix (%d x %d):\n", processes + resources, processes + resources);
    for (int i = 0; i < processes + resources; i++)
    {
        for (int j = 0; j < processes + resources; j++)
        {
            scanf("%d", &ragMatrix[i][j]);
        }
    }
    // Convert to WFG and print matrix
    convertToWFGMatrix(ragMatrix, wfgMatrix, processes, resources);
    printf("\nWFG Adjacency Matrix:\n");
    printMatrix(wfgMatrix, processes);
    // Input RAG adjacency list
    Node *ragList[MAX_PROCESSES + MAX_RESOURCES] = {NULL};
    Node *wfgList[MAX_PROCESSES] = {NULL};
    printf("\nEnter the RAG adjacency list:\n");
    for (int i = 0; i < processes + resources; i++)
    {
        int numEdges;
        printf("Enter number of edges from node %d: ", i);
        scanf("%d", &numEdges);
        for (int j = 0; j < numEdges; j++)
        {
            int dest;
            scanf("%d", &dest);
            addEdge(ragList, i, dest);
        }
    }
    // Convert to WFG adjacency list and print
    convertToWFGList(ragList, wfgList, processes, resources);
    printf("\nWFG Adjacency List:\n");
    printList(wfgList, processes);
    return 0;
}