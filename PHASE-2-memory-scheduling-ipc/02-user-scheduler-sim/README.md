# Project: User Scheduler Sim

## Overview
Simulates a user-level scheduler in the kernel.

## Learning Objectives
- Scheduler internals
- task_struct manipulation

## Code Walkthrough
- Key file: user_sched.c
- APIs: schedule, task_struct

## Build Instructions
```bash
make
sudo insmod user_sched.ko
dmesg -w
sudo rmmod user_sched
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add priority scheduling

## References
- https://www.kernel.org/doc/html/latest/
