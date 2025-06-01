# Project: eBPF Observability

## Overview
Implements observability tools using eBPF.

## Learning Objectives
- eBPF internals
- Tracing and monitoring

## Code Walkthrough
- Key file: ebpf_obs.c
- APIs: bpf programs, maps

## Build Instructions
```bash
make
sudo insmod ebpf_obs.ko
dmesg -w
sudo rmmod ebpf_obs
```

## Challenges & Solutions
- N/A

## Future Improvements
- Add more probes

## References
- https://www.kernel.org/doc/html/latest/
