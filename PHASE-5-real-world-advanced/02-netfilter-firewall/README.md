# Project: Netfilter Firewall

## Overview
Implements a simple firewall using netfilter hooks.

## Learning Objectives
- Netfilter framework
- Packet filtering

## Code Walkthrough
- Key file: netfilter_fw.c
- APIs: nf_register_hook

## Build Instructions
```bash
make
sudo insmod netfilter_fw.ko
dmesg -w
sudo rmmod netfilter_fw
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add userland control

## References
- https://www.kernel.org/doc/html/latest/
