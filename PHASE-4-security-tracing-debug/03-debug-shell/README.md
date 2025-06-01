# Project: Debug Shell

## Overview
Implements a debug shell for kernel introspection.

## Learning Objectives
- Debugging in kernel
- Command parsing

## Code Walkthrough
- Key file: debug_shell.c
- APIs: debugfs, command parsing

## Build Instructions
```bash
make
sudo insmod debug_shell.ko
dmesg -w
sudo rmmod debug_shell
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more debug commands

## References
- https://www.kernel.org/doc/html/latest/
