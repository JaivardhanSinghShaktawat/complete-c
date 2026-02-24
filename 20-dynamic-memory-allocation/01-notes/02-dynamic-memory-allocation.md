# Dynamic Memory Allocation

An statically allocated variable or array has a fixed size in memory.

Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.

Memory assigned to a program in a typical architecture can be broken down into four segments.

1. Code
2. Static/Global variables
3. Stack
4. Heap

The allocation of memory in heap during runtime is called as dynamic memory allocation.

Heap is called as dynamic memory.

We can allocate different memory or different size of memory during runtime like memory for structures , unions , arrays , integer data type , character arrays etc.

## Functions for dynamic memory allocation

In Dynamic memory allocation , the memory is allocated at runtime from the heap segment/memory.

We have four functions that help us achieve this task.

1. malloc
2. calloc
3. realloc
4. free

All these functions are present inside the stdlib.h header file.

## C malloc() function

- malloc() stands for memory allocation

- It reserves a block of memory with the given amount of bytes in heap memory.

- The return value is a void pointer to the allocated space.

- Therefore the void pointer needs to be casted to the appropriate type as per the requirements.

- However,if the space is insufficient , allocation of memory fails and it returns a NULL pointer.

- Always check that whether the pointer recieved is NULL pointer or valid pointer.

- All the values at allocated memory are initialized to garbage values.

- If there is less space in heap memory than malloc() returns a NULL pointer.

- We use sizeof() operator to find the size of the data type in bytes and even with malloc() function.

Syntax :

```
ptr = (ptr-type*) malloc(size_in_bytes);
```

```c
int *ptr = (int*) malloc(3*sizeof(int));
```

## Why we use sizeof() inside malloc() ?

sizeof() returns the size of the data types in bytes.The size of the data types is compiler and architecture dependent.So,we directly can't assume that the size of int will always be 4 or 2.

## C calloc function

- calloc() stands for contiguous allocation.

- It reserves n blocks of memory with the given amount of bytes.

- The return value is a void pointer to the allocated space.

- Therefore , the void pointer needs to be casted to the appropriate type as per the requirements.

- However , if the space is insufficient,allocation of memory fails and it returns a NULL pointer.

- All the values at allocated memory are initialized to 0.

Syntax :

```
ptr = (ptr-type*) calloc(n , size_in_bytes) ;
```

## C realloc function

- realloc() stands for reallocation.

- If the dynamically allocated memory is insufficient than we can change the size of previously allocated memory using realloc() function.

Syntax :

```
ptr = (ptr-type*) realloc(ptr,new_size_in_bytes);

```

## C free() function

- free() is used to free the allocated memory.

- If the dynamically allocated memory is not required anymore, we can free it using free function.

- This will free the memory being used by the program in the heap.

- Syntax

free(ptr);
