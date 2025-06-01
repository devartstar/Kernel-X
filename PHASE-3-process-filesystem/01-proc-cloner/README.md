# Project: Proc Cloner

## Overview
Clones process information using procfs.

## Learning Objectives
- procfs manipulation
- Process duplication

## Code Walkthrough
- Key file: proc_cloner.c
- APIs: proc_create, seq_file

## Build Instructions
```bash
make
sudo insmod proc_cloner.ko
dmesg -w
sudo rmmod proc_cloner
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add filtering options

## References
- https://www.kernel.org/doc/html/latest/
