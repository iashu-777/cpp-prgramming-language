#include <stdio.h>
struct Process
{
    int id;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};
void calculateTimes(struct Process processes[], int n)
{
    int total_waiting_time = 0;
    int total_turnaround_time = 0;
    int current_time = 0;
    // First process starts when it arrives or when CPU is free
    processes[0].waiting_time = (processes[0].arrival_time > 0) ? (processes[0].arrival_time - 0) : 0;
    current_time = processes[0].arrival_time + processes[0].burst_time;
    processes[0].turnaround_time = processes[0].waiting_time + processes[0].burst_time;
    // For the rest of the processes
    for (int i = 1; i < n; i++)
    {
        if (current_time < processes[i].arrival_time)
            current_time = processes[i].arrival_time;
        processes[i].waiting_time = current_time - processes[i].arrival_time;
        current_time += processes[i].burst_time;
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;
    }
    // Print process infoprintf("\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\n",
               processes[i].id,
               processes[i].arrival_time,
               processes[i].burst_time,
               processes[i].waiting_time,
               processes[i].turnaround_time);
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }
    printf("\nAverage Waiting Time: %.2f\n", (float)total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}
int main()
{
    int n;
    printf("Name: Aryan Mishra\nRoll No: 2301641540053\n\n");
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process processes[n];
    for (int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;
        printf("Enter arrival time and burst time for process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
    }
    // Sort processes by arrival time (FCFS)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (processes[j].arrival_time > processes[j + 1].arrival_time)
            {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    calculateTimes(processes, n);
    return 0;
}