#include <stdio.h>
#include <stdbool.h>
#define MAX_PROCESSES 10
#define MAX_RESOURCES 10
// Function to calculate the need matrix
void calculateNeed(int need[MAX_PROCESSES][MAX_RESOURCES],
                   int max[MAX_PROCESSES][MAX_RESOURCES],
                   int allocation[MAX_PROCESSES][MAX_RESOURCES],
                   int processes, int resources)
{
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}
// Function to check if the system is in a safe state
bool isSafe(int processes, int resources,
            int available[MAX_RESOURCES],
            int max[MAX_PROCESSES][MAX_RESOURCES],
            int allocation[MAX_PROCESSES][MAX_RESOURCES])
{
    int need[MAX_PROCESSES][MAX_RESOURCES];
    calculateNeed(need, max, allocation, processes, resources);
    bool finished[MAX_PROCESSES] = {false};
    int work[MAX_RESOURCES];
    // Initialize work = available
    for (int i = 0; i < resources; i++)
    {
        work[i] = available[i];
    }
    while (true)
    {
        bool found = false;
        for (int i = 0; i < processes; i++)
        {
            if (!finished[i])
            {
                bool canAllocate = true;
                for (int j = 0; j < resources; j++)
                {
                    if (need[i][j] > work[j])
                    {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate)
                {
                    for (int j = 0; j < resources; j++)
                    {
                        work[j] += allocation[i][j];
                    }
                    finished[i] = true;
                    found = true;
                }
            }
        }
        if (!found)
        {
            for (int i = 0; i < processes; i++)
            {
                if (!finished[i])
                {
                    return false; // Not all processes could finish
                }
            }
            return true; // All processes finished safely
        }
    }
}
int main()
{
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    int processes, resources;
    int allocation[MAX_PROCESSES][MAX_RESOURCES];
    int max[MAX_PROCESSES][MAX_RESOURCES];
    int available[MAX_RESOURCES];
    // Input processes and resources
    printf("Enter the number of processes: ");
    scanf("%d", &processes);
    printf("Enter the number of resources: ");
    scanf("%d", &resources);
    // Input allocation matrix
    printf("\nEnter the Allocation Matrix (%d x %d):\n", processes, resources);
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            scanf("%d", &allocation[i][j]);
        }
    }
    // Input max matrix
    printf("\nEnter the Maximum Matrix (%d x %d):\n", processes, resources);
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < resources; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
    // Input available resources
    printf("\nEnter the Available Resources (size %d):\n", resources);
    for (int i = 0; i < resources; i++)
    {
        scanf("%d", &available[i]);
    }
    // Check for safe state
    if (isSafe(processes, resources, available, max, allocation))
    {
        printf("\n The system is in a SAFE state.\n");
    }
    else
    {
        printf("\n The system is NOT in a SAFE state (unsafe).\n");
    }
    return 0;
}