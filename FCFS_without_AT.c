// Implementing First Come First Serve (FCFS) scheduling algorithm assuming that all processes arrive at the same time (AT=0 or without arrival time)

#include <stdio.h>
#define max 20
int main()
{
    int n, i, j, bt[max], wt[max], tat[max], ct[max];
    float avg_wt = 0, avg_tat = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time of the processes:\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]= ", i);
        scanf("%d", &bt[i]);
    }
    // Calculating waiting time and turn around time
    printf("\nProcess\tBurst Time\tWaiting Time\tTurn Around Time\tCompletion Time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;

        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }

        tat[i] = wt[i] + bt[i];
        ct[i] = tat[i]; // Since Arrival time = 0; so CT=TAT
        avg_wt = avg_wt + wt[i];
        avg_tat = avg_tat + tat[i];
        printf("P[%d]\t%d\t\t%d\t\t%d\t\t\t%d\n", i, bt[i], wt[i], tat[i], ct[i]);
    }
    avg_wt = avg_wt / n;
    avg_tat = avg_tat / n;
    printf("\nAverage Waiting Time: %f", avg_wt);
    printf("\nAverage Turn Around Time: %f", avg_tat);

    return 0;
}
