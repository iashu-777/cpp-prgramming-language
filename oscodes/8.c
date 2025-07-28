#include <stdio.h>
// Function to perform Worst-Fit allocation
void worstFit(int block_sizes[], int num_blocks, int process_size)
{
    int max_idx = -1;
    for (int i = 0; i < num_blocks; i++)
    {
        if (block_sizes[i] >= process_size)
        {
            if (max_idx == -1 || block_sizes[i] > block_sizes[max_idx])
            {
                max_idx = i;
            }
        }
    }
    if (max_idx != -1)
    {
        printf("Allocated process of size %d to block %d\n", process_size, max_idx);
        block_sizes[max_idx] -= process_size;
    }
    else
    {
        printf("No block available for process of size %d\n", process_size);
    }
}
// Function to perform Best-Fit allocation
void bestFit(int block_sizes[], int num_blocks, int process_size)
{
    int min_idx = -1;
    for (int i = 0; i < num_blocks; i++)
    {
        if (block_sizes[i] >= process_size)
        {
            if (min_idx == -1 || block_sizes[i] < block_sizes[min_idx])
            {
                min_idx = i;
            }
        }
    }
    if (min_idx != -1)
    {
        printf("Allocated process of size %d to block %d\n", process_size, min_idx);
        block_sizes[min_idx] -= process_size;
    }
    else
    {
        printf("No block available for process of size %d\n", process_size);
    }
}
// Function to perform First-Fit allocation
void firstFit(int block_sizes[], int num_blocks, int process_size)
{
    for (int i = 0; i < num_blocks; i++)
    {
        if (block_sizes[i] >= process_size)
        {
            printf("Allocated process of size %d to block %d\n", process_size, i);
            block_sizes[i] -= process_size;
            return;
        }
    }
    printf("No block available for process of size %d\n", process_size);
}
int main()
{
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    int num_blocks, num_processes;
    printf("Enter number of blocks: ");
    scanf("%d", &num_blocks);
    int block_sizes[num_blocks];
    printf("Enter block sizes: ");
    for (int i = 0; i < num_blocks; i++)
    {
        scanf("%d", &block_sizes[i]);
    }
    printf("Enter number of processes: ");
    scanf("%d", &num_processes);
    int process_sizes[num_processes];
    printf("Enter process sizes: ");
    for (int i = 0; i < num_processes; i++)
    {
        scanf("%d", &process_sizes[i]);
    }
    int choice;
    printf("Enter allocation technique (1-WorstFit, 2-BestFit, 3-FirstFit): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (int i = 0; i < num_processes; i++)
        {
            worstFit(block_sizes, num_blocks, process_sizes[i]);
        }
        break;
    case 2:
        for (int i = 0; i < num_processes; i++)
        {
            bestFit(block_sizes, num_blocks, process_sizes[i]);
        }
        break;
    case 3:
        for (int i = 0; i < num_processes; i++)
        {
            firstFit(block_sizes, num_blocks, process_sizes[i]);
        }
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}