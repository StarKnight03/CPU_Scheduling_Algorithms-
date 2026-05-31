# Shortest Job First (SJF) Scheduling Algorithm in C
## Assumptions

- All processes arrive at the same time.
- Arrival Time (AT) = 0 for every process.
- Non-preemptive SJF scheduling is used.
- If two processes have the same Burst Time, their relative order depends on the sorting process.


## Overview

This project implements the **Shortest Job First (SJF)** CPU Scheduling Algorithm in C.

SJF is a non-preemptive scheduling algorithm that selects the process with the smallest Burst Time (BT) for execution first. It is known for minimizing the average waiting time among non-preemptive scheduling algorithms.

In this implementation, all processes are assumed to arrive at the same time (**Arrival Time = 0**).

## Features

- Accepts Burst Time (BT) for each process
- Sorts processes according to Burst Time
- Calculates Waiting Time (WT)
- Calculates Turnaround Time (TAT)
- Calculates Completion Time (CT)
- Calculates Average Waiting Time
- Calculates Average Turnaround Time
- Preserves original process IDs after sorting

## Performance Metrics

### Waiting Time (WT)

```text
WT = Sum of Burst Times of all previously executed processes
```

### Turnaround Time (TAT)

```text
TAT = WT + BT
```

### Completion Time (CT)

```text
CT = TAT
```

Since Arrival Time (AT) = 0 for all processes.

## Algorithm

1. Input the number of processes.
2. Input Burst Time (BT) for each process.
3. Sort processes in ascending order of Burst Time.
4. Calculate Waiting Time (WT).
5. Calculate Turnaround Time (TAT).
6. Calculate Completion Time (CT).
7. Compute average WT and average TAT.
8. Display the results.

## Input Example

```text
Enter the number of processes: 4

Enter the burst time of processes:

P[0] = 6
P[1] = 2
P[2] = 8
P[3] = 3
```

## Sample Output

```text
Process   Burst Time   Waiting Time   Turn Around Time   Completion Time

P[1]      2            0              2                  2
P[3]      3            2              5                  5
P[0]      6            5              11                 11
P[2]      8            11             19                 19

Average Waiting Time: 4.50
Average Turn Around Time: 9.25
```

## Time Complexity

```text
O(n²)
```

The program uses a sorting step (nested loops) to arrange processes according to Burst Time.

## Space Complexity

```text
O(n)
```


## Requirements

- C Compiler (GCC recommended)

## Compilation

```bash
gcc sjf.c -o sjf
```

## Execution

```bash
./sjf
```

## File Structure

```text
SJF/
│
├── sjf.c
└── README.md
```

## Concepts Covered

- CPU Scheduling
- Shortest Job First (SJF)
- Non-Preemptive Scheduling
- Waiting Time Calculation
- Turnaround Time Calculation
- Completion Time Calculation
- Process Sorting

## Author

Priyanshu
