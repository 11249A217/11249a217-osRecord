Aim 
To create a child process using the fork() system call and observe parent and child 
execution. 
Algorithm 
1. Create a new process using fork(). 
2. Check the return value of fork(). 
3. If return value is 0, it is the child process. 
4. If return value is positive, it is the parent process. 
5. Display process IDs. 
 
Source Code 
#include <stdio.h> 
#include <unistd.h> 
int main() { 
    pid_t pid; 
    pid = fork(); 
    if (pid == 0) { 
        printf("Child Process\n"); 
        printf("Child PID: %d\n", getpid()); 
    } else { 
        printf("Parent Process\n"); 
        printf("Parent PID: %d\n", getpid()); 
    } 
    return 0; 
} 
