# Project: Hello World Module

## Overview
A simple kernel module that prints 'Hello, World!' to the kernel log. Targets module loading and printk basics.

## Learning Objectives
- Module loading/unloading
- printk usage

## Code Walkthrough
- Key file: hello.c
- APIs: module_init, module_exit, printk

## Build Instructions
```bash
make
sudo insmod hello.ko
dmesg -w
sudo rmmod hello
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add parameters

## References
- https://www.kernel.org/doc/html/latest/
