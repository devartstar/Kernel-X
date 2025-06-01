# Project: Keylogger Sim

## Overview
A simulated keylogger kernel module to understand input subsystem and interrupts.

## Learning Objectives
- Input subsystem basics
- Interrupt handling

## Code Walkthrough
- Key file: keylogger.c
- APIs: input_register_handler, IRQ

## Build Instructions
```bash
make
sudo insmod keylogger.ko
dmesg -w
sudo rmmod keylogger
```

## Challenges & Solutions
- N/A

## Future Improvements
- Real key event capture

## References
- https://www.kernel.org/doc/html/latest/
