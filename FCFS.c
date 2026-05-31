// Implementing First Come First Serve (FCFS) scheduling algorithm

#include <stdio.h>
#define max 20
int main()
{
    int n, i, j, at[max], bt[max], wt[max], tat[max], ct[max];
    float avg_wt = 0, avg_tat = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the arrival time of the processes:\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]= ", i);
        scanf("%d", &at[i]);
    }
    printf("Enter the burst time of the processes:\n");
    for (i = 0; i < n; i++)
    {

        printf("P[%d]= ", i);
        scanf("%d", &bt[i]);
    }

    ct[0] = at[0] + bt[0];

    for (i = 1; i < n; i++)
    {
        if (ct[i - 1] < at[i])
        {
            ct[i] = at[i] + bt[i]; // CPU is idle
        }

        else
        {
            ct[i] = ct[i - 1] + bt[i];
        }
    }

    // Calculating waiting time and turn around time
    for (i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        avg_tat = avg_tat + tat[i];
        avg_wt = avg_wt + at[i];
    }

    avg_tat = avg_tat / n;
    avg_wt = avg_wt / n;

    printf("\nProcess\tBurst Time\tCompletion Time\tTurn Around Time\tWaiting time\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]\t%d\t\t%d\t\t%d\t\t\t%d\n", i, bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Waiting Time: %f", avg_wt);
    printf("\nAverage Turn Around Time: %f", avg_tat);

    return 0;
}