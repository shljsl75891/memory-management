Hey, I am learning about the memory management in C programming language by following this [Boot.dev course](https://www.boot.dev/courses/learn-memory-management-c)

#### `sizeof` operator

![](/assets/2025-12-01-16-45-46.png)

> As a rule of thumb, ordering your fields from largest to smallest will help the compiler minimize padding. Structs must be padded so their total size is a multiple of the largest field alignment

### Memory and Pointers

- Variables are human readable names that refer to some data in memory.
- Memory is a big array of bytes, and data is stored in the array.

A variable is simply a human readable name that refers to an address in memory, which is an index to that big array of bytes.

![](/assets/2025-12-01-20-15-37.png)

An address is always in hexadecimal format. (0xFFF8). Our C program has no direct access to physical RAM while its execution. Instead, OS provides a layer of abstraction called `"virtual memory"`. This helps OS for isolation and security of each process's memory. Thus, the control of physical memory remains to OS. Although, in absence of OS, programs can directly interact with physical memory.
