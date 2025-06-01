# Project: Fork/Exec Tracer

## Overview
Traces fork and exec system calls in the kernel.

## Learning Objectives
- System call tracing
- Process creation

## Code Walkthrough
- Key file: fork_exec_tracer.c
- APIs: tracepoints, syscalls

## Build Instructions
```bash
make
sudo insmod fork_exec_tracer.ko
dmesg -w
sudo rmmod fork_exec_tracer
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add userland reporting

## References
- https://www.kernel.org/doc/html/latest/
