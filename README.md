# arena_alloc

Stateful Arena Allocator that can be used with standard containers. Falls back to the standard allocator if it runs out of memory.
Since allocators can't maintain state it uses a internal static class that keeps track of allocations. 

to specify the size of the arena define the macro ARENA_ALLOCATOR_SIZE before including the header file. The default size is one megabyte.

```cpp
#define ARENA_ALLOCATOR_SIZE 1024
#include "arena_alloc.h"
```

Uses c++ 20 features but c++17 equivalents are availible and commented out if needed.
