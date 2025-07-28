
#include <stdio.h>
struct Process {
int id;
int arrival_time;
int burst_time;
int priority;
int waiting_time;
int turnaround_time;
int completion_time;
};
void calculateTimes(struct Process processes[], int n) {
int total_waiting_time = 0;
int total_turnaround_time = 0;
int completed = 0, current_time = 0;
while (completed != n) {
int idx = -1;
int highest_priority = -1;
for (int i = 0; i < n; i++) {
if (processes[i].arrival_time <= current_time && processes[i].completion_time == 0) {
if (processes[i].priority > highest_priority) {
highest_priority = processes[i].priority;
idx = i;
} else if (processes[i].priority == highest_priority) {
if (processes[i].arrival_time < processes[idx].arrival_time) {
idx = i;
}
}
}}
if (idx != -1) {
processes[idx].completion_time = current_time + processes[idx].burst_time;
processes[idx].turnaround_time = processes[idx].completion_time -
processes[idx].arrival_time;
processes[idx].waiting_time = processes[idx].turnaround_time - processes[idx].burst_time;
total_waiting_time += processes[idx].waiting_time;
total_turnaround_time += processes[idx].turnaround_time;
completed++;
current_time = processes[idx].completion_time;
} else {
current_time++;
}
}
// Displaying results
printf("\nProcess\tArrival\tBurst\tPriority\tWaiting\tTurnaround\n");
for (int i = 0; i < n; i++) {
printf("P%d\t%d\t%d\t%d\t\t%d\t%d\n",
processes[i].id,
processes[i].arrival_time,
processes[i].burst_time,
processes[i].priority,
processes[i].waiting_time,
processes[i].turnaround_time);
}
printf("\nAverage Waiting Time: %.2f\n", (float)total_waiting_time / n);
printf("Average Turnaround Time: %.2f\n", (float)total_turnaround_time / n);
}
int main() {
int n;
printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
printf("Enter the number of processes: ");
scanf("%d", &n);
struct Process processes[n];
for (int i = 0; i < n; i++) {
processes[i].id = i + 1;
printf("Enter arrival time, burst time and priority for process %d: ", i + 1);
scanf("%d %d %d", &processes[i].arrival_time, &processes[i].burst_time,
&processes[i].priority);
processes[i].completion_time = 0;
}
calculateTimes(processes, n);
return 0;
}