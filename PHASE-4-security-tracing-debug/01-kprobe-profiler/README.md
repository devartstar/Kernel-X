# Project: Kprobe Profiler

## Overview
Implements a profiler using kprobes.

## Learning Objectives
- Kprobe internals
- Profiling

## Code Walkthrough
- Key file: kprobe_profiler.c
- APIs: kprobe, register_kprobe

## Build Instructions
```bash
make
sudo insmod kprobe_profiler.ko
dmesg -w
sudo rmmod kprobe_profiler
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more probe points

## References
- https://www.kernel.org/doc/html/latest/
