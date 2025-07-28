
#include <stdio.h>
#define MAX 100
// Function to print Allocation and Request Matrices
void printRAG(int allocation[MAX][MAX], int request[MAX][MAX], int processes, int resources)
{
    printf("\nResource Allocation Graph (RAG):\n");
    // Print Allocation Matrix
    printf("\nAllocation Matrix:\n");
    for (int i = 0; i < processes; i++)
    {
        printf("P%d: ", i);
        for (int j = 0; j < resources; j++)
        {
            printf("%d ", allocation[i][j]);
        }
        printf("\n");
    }
    // Print Request Matrix
    printf("\nRequest Matrix:\n");
    for (int i = 0; i < processes; i++)
    {
        printf("P%d: ", i);
        for (int j = 0; j < resources; j++)
        {
            printf("%d ", request[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    int processes, resources;
    int allocation[MAX][MAX], request[MAX][MAX];
    printf("Enter the number of processes: ");
    scanf("%d", &processes);
    printf("Enter the number of resources: ");
    scanf("%d", &resources);
    // Input Allocation Matrix
    printf("\nEnter the Allocation Matrix (%d x %d):\n", processes, resources);
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            scanf("%d", &allocation[i][j]);
        }
    }
    // Input Request Matrix
    printf("\nEnter the Request Matrix (%d x %d):\n", processes, resources);
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            scanf("%d", &request[i][j]);
        }
    }
    // Print the RAG
    printRAG(allocation, request, processes, resources);
    return 0;
}