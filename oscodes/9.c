#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int buffer[SIZE];
int in = 0, out = 0;
int mutex = 1;
int full = 0;
int empty = SIZE;
// Simulate wait and signal for semaphores
int wait(int s)
{
    return (--s);
}
int signal(int s)
{
    return (++s);
}
void produce(int item)
{
    mutex = wait(mutex);
    empty = wait(empty);
    buffer[in] = item;
    in = (in + 1) % SIZE;
    full = signal(full);
    mutex = signal(mutex);
    printf("Produced: %d\n", item);
}
void consume()
{
    mutex = wait(mutex);
    full = wait(full);
    int item = buffer[out];
    out = (out + 1) % SIZE;
    empty = signal(empty);
    mutex = signal(mutex);
    printf("Consumed: %d\n", item);
}
int main()
{
    int choice, item;
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n");
    while (1)
    {
        printf("\n1. Produce\n2. Consume\n3. Exit\nEnter your choice: ");
        if (scanf("%d", &choice) != 1)
            break;
        switch (choice)
        {
        case 1:
            if ((mutex == 1) && (empty != 0))
            {
                printf("Enter item to produce: ");
                scanf("%d", &item);
                produce(item);
            }
            else
            {
                printf("Buffer is Full!\n");
            }
            break;
        case 2:
            if ((mutex == 1) && (full != 0))
            {
                consume();
            }
            else
            {
                printf("Buffer is Empty!\n");
            }
            break;
        case 3:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}