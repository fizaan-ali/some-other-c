# C Programming Explorations

A collection of C programs demonstrating core programming concepts with focus on pointers, memory management, data structures, and practical applications.

## Overview

This repository contains C language programs exploring advanced topics including dynamic memory allocation, pointers, structures, typedef, and string manipulation. It serves as both learning material and reference implementation for intermediate C concepts.

## Tech Stack

- **Language**: C (C99 standard)
- **Compiler**: GCC (gcc)
- **Build System**: Direct compilation with gcc

## Topics Covered

### Pointers and Memory Management
- **Pointer Basics**: Declaration, dereferencing, pointer arithmetic
- **Dynamic Memory**: malloc, calloc, realloc, free
- **Memory Debugging**: Leak detection and prevention
- **Complex Pointers**: Pointers to pointers, arrays of pointers

### Arrays and Structures
- **Arrays**: Single and multi-dimensional arrays
- **2D Arrays**: Matrix operations and manipulation
- **Structures**: Struct definition, member access, nesting
- **Arrays of Structures**: Complex data organization

### String Operations
- **String Handling**: Character arrays and strings
- **String Functions**: strlen, strcpy, strcmp, strcat
- **String Pointers**: Working with pointer-based strings
- **String Manipulation**: Parsing, searching, modifying

### Advanced Topics
- **Typedef**: Creating custom type aliases
- **Function Pointers**: Callbacks and function dispatch
- **Macros**: Preprocessor directives and macro usage
- **File I/O**: Reading and writing files

## Repository Structure

The repository contains programs organized by topic:

- **Pointers** - Pointer usage and manipulation
- **Dynamic Memory** - malloc, calloc, realloc, free
- **2D Arrays** - Matrix operations and multi-dimensional arrays
- **Structures** - Struct usage and complex data types
- **Strings** - String operations and manipulation
- **Typedef** - Type aliases and custom types
- **Advanced** - Complex concepts and patterns

## Key Programs

### Memory Management
- `dynamicmemory.c` - Dynamic array allocation
- `realloc.c` - Resizing allocated memory
- `free.c` - Proper memory deallocation

### Data Structures
- `2darray.c` - 2D array operations
- `structure.c` - Struct definition and usage
- `point.c` - Point structure with operations

### Pointer Examples
- `pointers.c` - Basic pointer operations
- `strpointer.c` - String pointer operations
- `nIntegers.c` - Arrays and pointer arithmetic

### String Operations
- `string.c` - String basics and manipulation
- `strings.c` - Multiple string operations
- `typedef.c` - Type aliases with structures

## Compilation

### Compile a single file:
```bash
gcc -o program_name program.c
```

### Compile with strict flags:
```bash
gcc -Wall -Wextra -std=c99 -o program_name program.c
```

### Compile and run:
```bash
gcc -Wall -std=c99 -o program program.c && ./program
```

## Usage Examples

### Pointer Operations
```bash
gcc -o pointer_demo pointers.c
./pointer_demo
```

### Dynamic Memory Allocation
```bash
gcc -o dynamic dynamicmemory.c
./dynamic
```

### 2D Array Operations
```bash
gcc -o matrix 2darray.c
./matrix
```

### Structure Examples
```bash
gcc -o struct_demo structure.c
./struct_demo
```

## Key Concepts

### Pointer Arithmetic
```c
int* arr = (int*) malloc(10 * sizeof(int));
arr[0] = 5;
int value = *(arr + 0);  // Same as arr[0]
free(arr);
```

### 2D Arrays
```c
int matrix[3][3];
int (*ptr)[3] = &matrix[0];
printf("%d\n", matrix[1][2]);
```

### Structures with Pointers
```c
struct Point {
    int x, y;
};
struct Point* p = malloc(sizeof(struct Point));
p->x = 10;
free(p);
```

### String Manipulation
```c
char str[100] = "hello";
char* ptr = str;
printf("%c\n", *ptr);  // 'h'
printf("%c\n", *(ptr + 1));  // 'e'
```

## Memory Management Checklist

- [ ] Every malloc() has a corresponding free()
- [ ] Check malloc() return value before use
- [ ] No dereferencing of freed pointers
- [ ] No buffer overflows
- [ ] Proper array bounds checking
- [ ] Use sizeof() correctly with malloc

## Debugging and Validation

### Using Valgrind (Memory Leak Detection)
```bash
gcc -g -o program program.c
valgrind --leak-check=full ./program
```

### GDB Debugging
```bash
gcc -g -o program program.c
gdb ./program
(gdb) run
(gdb) print variable_name
(gdb) step
```

### Common Issues
- **Segmentation fault**: Check pointer dereferences, NULL checks
- **Memory leak**: Ensure all allocations are freed
- **Buffer overflow**: Check array bounds
- **Dangling pointer**: Don't use freed memory

## Prerequisites

- GCC compiler
- Basic C programming knowledge
- Understanding of pointers and memory concepts
- Linux or Windows environment with compiler

## Learning Path

1. **Start**: Basic pointer operations and syntax
2. **Progress**: Dynamic memory allocation
3. **Advanced**: Complex data structures and pointers
4. **Expert**: Memory management patterns and optimization

## Tips and Best Practices

- Always check malloc return value
- Use `sizeof(type)` not magic numbers
- Free memory in reverse order of allocation
- Avoid pointer arithmetic when possible
- Use structures for complex data
- Document pointer ownership clearly

## Resources

- [GNU C Library Reference](https://www.gnu.org/software/libc/manual/)
- [C99 Standard Features](https://en.cppreference.com/w/c/99)
- [C Pointer Tutorial](https://www.cprogramming.com/tutorial/c/lesson6.html)
- [Memory Management Guide](https://www.cprogramming.com/c/memory_management.html)

## License

MIT License - See LICENSE file for details

## Author

Fizaan Ali
