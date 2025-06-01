# Project: Sysfs & IOCTL

## Overview
Implements sysfs attributes and IOCTL interface in a driver.

## Learning Objectives
- sysfs attribute creation
- IOCTL implementation

## Code Walkthrough
- Key file: sysfs_ioctl.c
- APIs: device_create_file, ioctl

## Build Instructions
```bash
make
sudo insmod sysfs_ioctl.ko
dmesg -w
sudo rmmod sysfs_ioctl
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more sysfs attributes

## References
- https://www.kernel.org/doc/html/latest/
