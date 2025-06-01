# Project: Interrupt GPIO

## Overview
Implements a GPIO interrupt handler driver.

## Learning Objectives
- IRQ handling
- GPIO subsystem

## Code Walkthrough
- Key file: gpio_irq.c
- APIs: request_irq, gpio APIs

## Build Instructions
```bash
make
sudo insmod gpio_irq.ko
dmesg -w
sudo rmmod gpio_irq
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add debounce logic

## References
- https://www.kernel.org/doc/html/latest/
