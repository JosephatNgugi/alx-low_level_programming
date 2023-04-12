# Memory Allocation

Memory allocation is when a particular computer program is allocated memory space. There are two types of memory allocations. Static and dynamic.

### Static Memory Allocation
Automatic allocation is done at compile time, and the function's variables are created on the stack. The stack is a region of memory that is automatically managed by the compiler, and when a function returns, the stack memory is automatically deallocated.

### Dynamic Memory Allocation
This is done at runtime and the memory is allocated on the heap. The heap is a region of memory that is not automatically managed, and the programmer is responsible for allocating and deallocating memory.

## Malloc and Free
Malloc and free are functions in C that are used to dynamically allocate and deallocate memory on the heap. Malloc stands for "memory allocation," and it takes one argument, which is the number of bytes to allocate. It returns a pointer to the first byte of the allocated memory.

### How to use Malloc
- We use malloc when we want to dynamically allocate memory at runtime.
``` int* ptr = (int*) malloc(5 * sizeof(int)); ```
This allocates memory for 5 integers and returns a pointer to the first integer. Note that we cast the return value of malloc to int* to tell the compiler that we are working with integers.
-Once we are done using the memory, we must deallocate it using the free function:
``` free(ptr); ```
This frees the memory that was previously allocated using malloc.
-  This is useful when we don't know how much memory we will need until the program is running. For example, we might want to allocate memory for a dynamic array whose size is not known until runtime.
## Valgrind
Valgrind is a tool that is used to detect memory leaks and other memory errors in C programs.
To use Valgrind, we need to compile our program with debugging symbols using the -g flag.
``` gcc -g program.c -o program ```
Once we have compiled our program with debugging symbols, we can use Valgrind to check for memory leaks by running our program with Valgrind:
``` valgrind --leak-check=yes ./program ```
This will run our program with Valgrind and print out any memory errors that it finds, including memory leaks. Valgrind is a powerful tool and can help us catch subtle memory errors that might otherwise go unnoticed.
