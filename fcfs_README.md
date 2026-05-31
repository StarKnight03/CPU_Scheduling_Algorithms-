# First Come First Serve (FCFS) Scheduling Algorithm in C
## Assumptions

- Processes are entered in **non-decreasing order of Arrival Time**.
- The program does not perform sorting based on Arrival Time.
- FCFS scheduling is executed according to the input order.


## Overview

This project implements the **First Come First Serve (FCFS)** CPU Scheduling Algorithm in C.

FCFS is a non-preemptive CPU scheduling algorithm in which processes are executed in the order of their arrival. It is one of the simplest scheduling algorithms and follows the **FIFO (First In, First Out)** principle.

## Features

- Accepts Arrival Time (AT) and Burst Time (BT) for each process
- Calculates Completion Time (CT)
- Calculates Turnaround Time (TAT)
- Calculates Waiting Time (WT)
- Calculates Average Turnaround Time
- Calculates Average Waiting Time
- Handles CPU idle time when no process is available for execution

## Performance Metrics

### Completion Time (CT)

The time at which a process completes its execution.

### Turnaround Time (TAT)

```text
TAT = CT - AT
```

### Waiting Time (WT)

```text
WT = TAT - BT
```

## Algorithm

1. Input the number of processes.
2. Input Arrival Time (AT) for each process.
3. Input Burst Time (BT) for each process.
4. Calculate Completion Time (CT).
5. Calculate Turnaround Time (TAT).
6. Calculate Waiting Time (WT).
7. Calculate average WT and average TAT.
8. Display the results.

## Input Example

```text
Enter the number of processes: 4

Enter the arrival time of the processes:
P[0]= 0
P[1]= 1
P[2]= 3
P[3]= 5

Enter the burst time of the processes:
P[0]= 5
P[1]= 3
P[2]= 2
P[3]= 4
```

## Sample Output

```text
Process Arrival Time Burst Time Completion Time Turn Around Time Waiting Time

P[0]   0            5          5               5                0
P[1]   1            3          8               7                4
P[2]   3            2          10              7                5
P[3]   5            4          14              9                5

Average Waiting Time: 3.50
Average Turn Around Time: 7.00
```

## Time Complexity

```text
O(n)
```

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
- Completion Time Calculation
- Turnaround Time Calculation
- Waiting Time Calculation
- CPU Idle Time Handling

## Author

Priyanshu
