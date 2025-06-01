# Phase 1: Device Drivers

## Goals
- Short summary of key internals
- What you will build
- Key kernel subsystems explored

## Weekly Breakdown
| Week | Project                  | Key Concepts                  | Status      |
|------|--------------------------|-------------------------------|-------------|
| 1    | Char Device              | file_operations, cdev         | TODO / DONE |
| 2    | Pseudo Block Device      | block device, request queue   | TODO / DONE |
| 3    | Virtual Net Driver       | net_device, sk_buff           | TODO / DONE |
| 4    | Interrupt GPIO           | IRQ, GPIO, debounce           | TODO / DONE |
| 5    | Sysfs & IOCTL            | sysfs, ioctl                  | TODO / DONE |

## Learning Notes
- Links to diagrams, blog posts, or docs you created
- Reflection on challenges & solutions

## How to Build and Test
1. Compile with `make`
2. Load module with `sudo insmod`
3. Test functionality (commands, expected outputs)
4. Remove module with `sudo rmmod`
5. View logs with `dmesg`
