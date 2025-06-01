# Project: Syscall Interceptor

## Overview
Intercepts and logs system calls.

## Learning Objectives
- System call table
- Interception techniques

## Code Walkthrough
- Key file: syscall_interceptor.c
- APIs: syscall table, hooks

## Build Instructions
```bash
make
sudo insmod syscall_interceptor.ko
dmesg -w
sudo rmmod syscall_interceptor
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add filtering

## References
- https://www.kernel.org/doc/html/latest/
