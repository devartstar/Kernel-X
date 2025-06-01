# Project: Virtual Net Driver

## Overview
Implements a virtual network device driver.

## Learning Objectives
- net_device structure
- sk_buff handling

## Code Walkthrough
- Key file: vnet.c
- APIs: alloc_netdev, net_device_ops

## Build Instructions
```bash
make
sudo insmod vnet.ko
dmesg -w
sudo rmmod vnet
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add packet statistics

## References
- https://www.kernel.org/doc/html/latest/
