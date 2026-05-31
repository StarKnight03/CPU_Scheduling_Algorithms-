# First Come First Serve (FCFS) Scheduling Algorithm in C

## Assumptions

- All processes arrive at the same time.
- Arrival Time (AT) = 0 for every process.
- Processes are executed in the order they are entered.

  
## Overview

This project implements the **First Come First Serve (FCFS)** CPU Scheduling Algorithm in C.

FCFS is a non-preemptive scheduling algorithm in which processes are executed in the order they enter the ready queue. Since all processes are assumed to arrive at the same time (**Arrival Time = 0**), execution follows the order of input.

## Features

- Accepts Burst Time (BT) for each process
- Calculates Waiting Time (WT)
- Calculates Turnaround Time (TAT)
- Calculates Completion Time (CT)
- Calculates Average Waiting Time
- Calculates Average Turnaround Time
- Simple and easy-to-understand implementation

## Performance Metrics

### Waiting Time (WT)

```text
WT = Sum of Burst Times of all previous processes
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
3. Calculate Waiting Time (WT) for every process.
4. Calculate Turnaround Time (TAT).
5. Calculate Completion Time (CT).
6. Compute average WT and average TAT.
7. Display the results.

## Input Example

```text
Enter the number of processes: 4

Enter the burst time of the processes:
P[0] = 5
P[1] = 3
P[2] = 8
P[3] = 6
```

## Sample Output

```text
Process Burst Time Waiting Time Turn Around Time Completion Time

P[0]   5          0            5                5
P[1]   3          5            8                8
P[2]   8          8            16               16
P[3]   6          16           22               22

Average Waiting Time: 7.25
Average Turn Around Time: 12.75
```

## Time Complexity

```text
O(n²)
```

The waiting time for each process is calculated by summing the burst times of all previous processes.

## Space Complexity

```text
O(n)
```


## Requirements

- C Compiler (GCC recommended)

## Compilation

```bash
gcc fcfs.c -o fcfs
```

## Execution

```bash
./fcfs
```

## File Structure

```text
FCFS/
│
├── fcfs.c
└── README.md
```

## Concepts Covered

- CPU Scheduling
- FCFS Scheduling
- Waiting Time Calculation
- Turnaround Time Calculation
- Completion Time Calculation
- Non-Preemptive Scheduling

## Author

Priyanshu
