# First Come First Serve (FCFS) Scheduling Algorithm

## Description

This project implements the **First Come First Serve (FCFS)** CPU Scheduling Algorithm in C.

FCFS is a non-preemptive scheduling algorithm where processes are executed in the same order in which they arrive in the ready queue. It is the simplest CPU scheduling algorithm and follows the FIFO (First In, First Out) principle.

## Features

- Calculates Completion Time (CT)
- Calculates Turnaround Time (TAT)
- Calculates Waiting Time (WT)
- Calculates Average Turnaround Time
- Calculates Average Waiting Time
- Simple console-based implementation

## Formulae Used

### Waiting Time
```
WT = Sum of Burst Times of all previous processes
```

### Turnaround Time
```
TAT = WT + BT
```

### Completion Time
```
CT = TAT
```

(For this implementation, Arrival Time = 0 for all processes.)

## Algorithm

1. Input the number of processes.
2. Input burst time for each process.
3. Calculate waiting time for every process.
4. Calculate turnaround time.
5. Calculate completion time.
6. Display the results.
7. Calculate average waiting time and average turnaround time.

## Input Example

```text
Enter the number of processes: 4

Enter the burst time of the processes:
P[0] = 5
P[1] = 3
P[2] = 8
P[3] = 6
```

## Output Example

```text
Process   Burst Time   Waiting Time   Turn Around Time   Completion Time

P[0]      5            0              5                  5
P[1]      3            5              8                  8
P[2]      8            8              16                 16
P[3]      6            16             22                 22

Average Waiting Time: 7.25
Average Turn Around Time: 12.75
```

## Time Complexity

```
O(n²)
```

## Space Complexity

```
O(n)
```

## Technologies Used

- C Programming
- GCC Compiler

## Author

Priyanshu
