# Project: Custom LSM

## Overview
Implements a custom Linux Security Module (LSM).

## Learning Objectives
- LSM hooks
- Security subsystem

## Code Walkthrough
- Key file: custom_lsm.c
- APIs: security hooks

## Build Instructions
```bash
make
sudo insmod custom_lsm.ko
dmesg -w
sudo rmmod custom_lsm
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more hooks

## References
- https://www.kernel.org/doc/html/latest/
