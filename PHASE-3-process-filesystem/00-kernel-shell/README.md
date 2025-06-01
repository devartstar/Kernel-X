# Project: Kernel Shell

## Overview
Implements a simple shell inside the kernel for process management.

## Learning Objectives
- Process management
- Kernel command parsing

## Code Walkthrough
- Key file: kernel_shell.c
- APIs: process management, command parsing

## Build Instructions
```bash
make
sudo insmod kernel_shell.ko
dmesg -w
sudo rmmod kernel_shell
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more shell commands

## References
- https://www.kernel.org/doc/html/latest/
