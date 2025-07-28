#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    printf("Name: Ashish Kumar Gupta\nRoll No: 2301641540057\n\n");
    int fd;
    char buffer[100];
    // 1. File Creation using open (system call)
    fd = open("sample.txt", O_CREAT | O_WRONLY, 0644);
    if (fd < 0)
    {
        perror("File creation failed");
        return 1;
    }
    // 2. Writing to the file
    char msg[] = "This is a system call demonstration in C.\n";
    write(fd, msg, strlen(msg));
    close(fd); // 3. Close file
    // 4. Reading the file content
    fd = open("sample.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("File open failed");
        return 1;
    }
    printf("\nContent of file (using read system call):\n");
    int bytesRead = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytesRead] = '\0';
    printf("%s", buffer);
    close(fd);
    // 5. Process creation using fork
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0)
    {
        // Child process
        printf("\n[Child] Process ID: %d\n", getpid());
        printf("[Child] Parent Process ID: %d\n", getppid());
    }
    else
    {
        // Parent process
        wait(NULL); // wait for child to finish
        printf("\n[Parent] Process ID: %d\n", getpid());
        printf("[Parent] Child Process ID: %d\n", pid);
    }
    return 0;
}