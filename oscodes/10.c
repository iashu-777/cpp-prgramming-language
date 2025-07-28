#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/wait.h> // for wait()
#include <sys/types.h>
int data = 0;      // Shared data
int readCount = 0; // Number of active readers
// Semaphores
sem_t mutex;   // Protects readCount variable
sem_t w_mutex; // For writers to have exclusive access
void writer(int value)
{
    sem_wait(&w_mutex); // Wait for exclusive access
    data = value;
    printf("Writer wrote %d\n", value);
    sem_post(&w_mutex); // Release exclusive access
}
void reader(int id)
{
    sem_wait(&mutex); // Protect readCount update
    readCount++;
    if (readCount == 1)
    {
        sem_wait(&w_mutex); // First reader locks writer out
    }
    sem_post(&mutex);
    // Critical section: reading
    printf("Reader %d read %d\n", id, data);
    sem_wait(&mutex); // Protect readCount update
    readCount--;
    if (readCount == 0)
    {
        sem_post(&w_mutex); // Last reader allows writers
    }
    sem_post(&mutex);
}
int main()
{
    int num_writers, num_readers, i;
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    printf("Enter number of writers: ");
    scanf("%d", &num_writers);
    printf("Enter number of readers: ");
    scanf("%d", &num_readers);
    // Initialize semaphores
    sem_init(&mutex, 0, 1);
    sem_init(&w_mutex, 0, 1);
    // Create writer processes
    for (i = 0; i < num_writers; i++)
    {
        pid_t pid = fork();
        if (pid == 0)
        {
            // Writer process
            writer(i + 1);
            exit(0);
        }
    }
    // Create reader processes
    for (i = 0; i < num_readers; i++)
    {
        pid_t pid = fork();
        if (pid == 0)
        {
            // Reader processreader(i + 1);
            exit(0);
        }
    }
    // Wait for all child processes
    for (i = 0; i < num_writers + num_readers; i++)
    {
        wait(NULL);
    }
    // Destroy semaphores
    sem_destroy(&mutex);
    sem_destroy(&w_mutex);
    return 0;
}