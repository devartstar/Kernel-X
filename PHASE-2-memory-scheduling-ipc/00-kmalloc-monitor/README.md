# Project: kmalloc Monitor

## Overview
Monitors kmalloc usage in the kernel.

## Learning Objectives
- Slab allocator internals
- Memory statistics

## Code Walkthrough
- Key file: kmalloc_monitor.c
- APIs: kmalloc, kfree

## Build Instructions
```bash
make
sudo insmod kmalloc_monitor.ko
dmesg -w
sudo rmmod kmalloc_monitor
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add slab cache stats

## References
- https://www.kernel.org/doc/html/latest/
