#include <stdafx.h>
#include <kernel/memory.h>
#include <kernel/heap.h>
#include <kernel/xdbf.h>

// Full-runtime test executables don't link main.cpp. They still need the same
// process-wide guest memory/heap/XDBF owners as the actual executable.
Memory g_memory;
Heap g_userHeap;
XDBFWrapper g_xdbfWrapper;
