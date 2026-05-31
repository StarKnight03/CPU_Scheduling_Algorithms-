// Implementing Shortest Jo First (SJF) scheduling algorithm assuming that all processes arrive at the same time (AT=0 or without arrival time)

#include <stdio.h>
#define max 20
int main()
{
    int i, j, n, at[max], bt[max], ct[max], tat[max], wt[max], p[max], temp;
    float avg_wt = 0, avg_tat = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time of processes:\n");
    for (i = 0; i < n; i++)
    {
        p[i] = i;
        printf("P[%d]= ", i);
        scanf("%d", &bt[i]);
    }

    // Sorting the processes according to their burst time (bubble sort)
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if (bt[i] > bt[j])
            {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
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
        printf("P[%d]\t%d\t\t%d\t\t%d\t\t\t%d\n", p[i], bt[i], wt[i], tat[i], ct[i]);
    }
    avg_wt = avg_wt / n;
    avg_tat = avg_tat / n;
    printf("\nAverage Waiting Time: %f", avg_wt);
    printf("\nAverage Turn Around Time: %f", avg_tat);

    return 0;
}
