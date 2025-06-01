# Project: Pseudo Block Device

## Overview
Implements a pseudo block device driver for learning block layer internals.

## Learning Objectives
- Block device registration
- Request queue handling

## Code Walkthrough
- Key file: pseudoblk.c
- APIs: register_blkdev, request_queue

## Build Instructions
```bash
make
sudo insmod pseudoblk.ko
dmesg -w
sudo rmmod pseudoblk
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add partition support

## References
- https://www.kernel.org/doc/html/latest/
