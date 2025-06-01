# Project: PCIe Driver

## Overview
Implements a basic PCIe device driver.

## Learning Objectives
- PCIe subsystem
- Device tree basics

## Code Walkthrough
- Key file: pcie_driver.c
- APIs: pci_register_driver

## Build Instructions
```bash
make
sudo insmod pcie_driver.ko
dmesg -w
sudo rmmod pcie_driver
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add DMA support

## References
- https://www.kernel.org/doc/html/latest/
