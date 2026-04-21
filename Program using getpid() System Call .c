Aim 
To display the process ID using getpid(). 
 
Source Code 
#include <stdio.h> 
#include <unistd.h> 
int main() { 
    printf("Process ID: %d\n", getpid()); 
    return 0; 
}
