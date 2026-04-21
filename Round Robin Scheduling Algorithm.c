Aim 
To implement the Round Robin CPU scheduling algorithm. 
 
Algorithm 
1. Read number of processes and burst time. 
2. Read time quantum. 
3. Execute each process for a fixed time slice. 
4. Calculate waiting time and turnaround time. 
5. Display results. 
 
Source Code 
#include <stdio.h> 
int main() { 
    int n, tq, i, time = 0; 
    int bt[10], rt[10], wt[10] = {0}, tat[10]; 
    printf("Enter number of processes: "); 
    scanf("%d", &n); 
    printf("Enter burst times:\n"); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &bt[i]); 
        rt[i] = bt[i]; 
    } 
    printf("Enter time quantum: "); 
    scanf("%d", &tq); 
    while (1) { 
        int done = 1; 
        for (i = 0; i < n; i++) { 
            if (rt[i] > 0) { 
                done = 0; 
                if (rt[i] > tq) { 
                    time += tq; 
                    rt[i] -= tq; 
                } else { 
 
45 | Page 
 
                    time += rt[i]; 
                    wt[i] = time - bt[i]; 
                    rt[i] = 0; 
                } 
            } 
        } 
        if (done) 
            break; 
    } 
    for (i = 0; i < n; i++) 
        tat[i] = wt[i] + bt[i]; 
    printf("\nProcess\tBT\tWT\tTAT\n"); 
    for (i = 0; i < n; i++) 
        printf("P%d\t%d\t%d\t%d\n", i+1, bt[i], wt[i], tat[i]); 
    return 0; 
} 
