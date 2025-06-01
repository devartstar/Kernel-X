# Project: Custom Slab Allocator

## Overview
Implements a custom slab allocator for kernel objects.

## Learning Objectives
- Slab cache creation
- Custom memory management

## Code Walkthrough
- Key file: custom_slab.c
- APIs: kmem_cache_create, kmem_cache_alloc

## Build Instructions
```bash
make
sudo insmod custom_slab.ko
dmesg -w
sudo rmmod custom_slab
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add object statistics

## References
- https://www.kernel.org/doc/html/latest/
