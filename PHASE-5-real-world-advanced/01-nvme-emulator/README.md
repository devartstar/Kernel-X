# Project: NVMe Emulator

## Overview
Implements a simple NVMe device emulator.

## Learning Objectives
- NVMe protocol
- Block layer

## Code Walkthrough
- Key file: nvme_emulator.c
- APIs: block device, NVMe

## Build Instructions
```bash
make
sudo insmod nvme_emulator.ko
dmesg -w
sudo rmmod nvme_emulator
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add queue depth config

## References
- https://www.kernel.org/doc/html/latest/
