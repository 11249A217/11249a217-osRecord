Aim 
To implement the Shortest Job First CPU scheduling algorithm. 
 
Algorithm 
1. Read number of processes. 
2. Read burst times. 
3. Sort processes based on burst time. 
4. Calculate waiting time and turnaround time. 
5. Display results. 
 
Source Code 
#include <stdio.h> 
int main() { 
    int n, i, j; 
    int bt[10], wt[10], tat[10], temp; 
    printf("Enter number of processes: "); 
    scanf("%d", &n); 
    printf("Enter burst times:\n"); 
    for (i = 0; i < n; i++) 
        scanf("%d", &bt[i]); 
    for (i = 0; i < n-1; i++) { 
        for (j = i+1; j < n; j++) { 
            if (bt[i] > bt[j]) { 
                temp = bt[i]; 
                bt[i] = bt[j]; 
                bt[j] = temp; 
            } 
        } 
    } 
    wt[0] = 0; 
    for (i = 1; i < n; i++) 
        wt[i] = wt[i-1] + bt[i-1]; 
 
 
47 | Page 
 
    for (i = 0; i < n; i++) 
        tat[i] = wt[i] + bt[i]; 
    printf("\nProcess\tBT\tWT\tTAT\n"); 
    for (i = 0; i < n; i++) 
        printf("P%d\t%d\t%d\t%d\n", i+1, bt[i], wt[i], tat[i]); 
    return 0; 
} 
