# Project: Char Device

## Overview
Implements a basic character device driver.

## Learning Objectives
- Char device registration
- file_operations

## Code Walkthrough
- Key file: chardev.c
- APIs: register_chrdev, file_operations

## Build Instructions
```bash
make
sudo insmod chardev.ko
dmesg -w
sudo rmmod chardev
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add IOCTL support

## References
- https://www.kernel.org/doc/html/latest/
