# Project: Bare Metal Embedded

## Overview
Experiments with bare metal and embedded kernel builds.

## Learning Objectives
- Embedded Linux
- Cross-compiling

## Code Walkthrough
- Key file: bare_metal.c
- APIs: platform device, cross-compile

## Build Instructions
```bash
make
sudo insmod bare_metal.ko
dmesg -w
sudo rmmod bare_metal
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add board-specific support

## References
- https://www.kernel.org/doc/html/latest/
