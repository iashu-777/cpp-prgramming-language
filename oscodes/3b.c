#include <stdio.h>
#include <stdbool.h>
#define MAX_PROCESSES 100
struct Process
{
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
    int completion_time;
    int queue_level;
};
// Round Robin Scheduling
void roundRobin(struct Process processes[], int n, int time_quantum, int start_time, int end_time, int queue_level)
{
    int time = start_time;
    bool done;
    do
    {
        done = true;
        for (int i = 0; i < n; i++)
        {
            if (processes[i].remaining_time > 0 && processes[i].queue_level == queue_level &&
                processes[i].arrival_time <= time)
            {
                done = false;
                if (processes[i].remaining_time > time_quantum)
                {
                    time += time_quantum;
                    processes[i].remaining_time -= time_quantum;
                }
                else
                {
                    time += processes[i].remaining_time;
                    processes[i].completion_time = time;
                    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
                    processes[i].remaining_time = 0;
                }
            }
        }
    } while (!done && time <= end_time);
}
// FCFS Scheduling
void fcfs(struct Process processes[], int n, int start_time)
{
    int time = start_time;
    for (int i = 0; i < n; i++)
    {
        if (processes[i].queue_level == 3)
        {
            if (time < processes[i].arrival_time)
            {
                time = processes[i].arrival_time;
            }
            time += processes[i].burst_time;
            processes[i].completion_time = time;
            processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
            processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
            processes[i].remaining_time = 0;
        }
    }
}
// Display output and calculate averages
void calculateTimes(struct Process processes[], int n)
{
    int total_waiting_time = 0;
    int total_turnaround_time = 0;
    printf("\nProcess\tArrival\tBurst\tQueue\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++)
    {
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               processes[i].id,
               processes[i].arrival_time,
               processes[i].burst_time,
               processes[i].queue_level, processes[i].waiting_time,
               processes[i].turnaround_time);
    }
    printf("\nAverage Waiting Time: %.2f\n", (float)total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}
// Main Function
int main()
{
    int n;
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process processes[MAX_PROCESSES];
    for (int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;
        printf("Enter arrival time, burst time and queue level (1-3) for process %d: ", i + 1);
        scanf("%d %d %d", &processes[i].arrival_time, &processes[i].burst_time,
              &processes[i].queue_level);
        processes[i].remaining_time = processes[i].burst_time;
        processes[i].completion_time = 0;
    }
    // Queue 1: Round Robin with time quantum 2
    roundRobin(processes, n, 2, 0, MAX_PROCESSES, 1);
    // Queue 2: Round Robin with time quantum 4
    roundRobin(processes, n, 4, 0, MAX_PROCESSES, 2);
    // Queue 3: FCFS
    fcfs(processes, n, 0);
    calculateTimes(processes, n);
    return 0;
}