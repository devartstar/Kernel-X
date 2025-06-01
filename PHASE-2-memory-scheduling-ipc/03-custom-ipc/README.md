# Project: Custom IPC

## Overview
Implements a custom inter-process communication mechanism in the kernel.

## Learning Objectives
- Pipes, signals, or netlink
- Kernel-user communication

## Code Walkthrough
- Key file: custom_ipc.c
- APIs: pipe, signal, netlink

## Build Instructions
```bash
make
sudo insmod custom_ipc.ko
dmesg -w
sudo rmmod custom_ipc
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add userland test app

## References
- https://www.kernel.org/doc/html/latest/
