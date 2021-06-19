# arena_alloc

Stateful Arena Allocator that can be used with standard containers

Falls back to the standard allocator if it runs out of memory

Since allocators can't maintain state it uses a internal static class that keeps track of allocations 

To set the size of the arena call the set_arena_alloc_size() function and specify the size in bytes

```cpp
#include "arena_alloc.h"
...
set_arena_alloc_size(10000);
```


set the standard to c++ 20 to compile


Example usage
```cpp
allocator<int> alloc;
set_arena_alloc_size(10000);
std::vector<int, allocator<int>> vec1(100, alloc);
```
