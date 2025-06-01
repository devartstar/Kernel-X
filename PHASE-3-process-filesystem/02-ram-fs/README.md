# Project: RAM FS

## Overview
Implements a RAM-backed filesystem.

## Learning Objectives
- VFS internals
- RAM-based storage

## Code Walkthrough
- Key file: ramfs.c
- APIs: super_block, inode, file_operations

## Build Instructions
```bash
make
sudo insmod ramfs.ko
dmesg -w
sudo rmmod ramfs
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add file permissions

## References
- https://www.kernel.org/doc/html/latest/
