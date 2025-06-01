# Project: Task Injector

## Overview
Injects tasks or kernel threads for process management experiments.

## Learning Objectives
- Kernel thread creation
- Process management

## Code Walkthrough
- Key file: task_injector.c
- APIs: kthread_create, wake_up_process

## Build Instructions
```bash
make
sudo insmod task_injector.ko
dmesg -w
sudo rmmod task_injector
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add userland trigger

## References
- https://www.kernel.org/doc/html/latest/
