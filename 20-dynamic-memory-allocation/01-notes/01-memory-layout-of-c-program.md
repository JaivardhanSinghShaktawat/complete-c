# Dynamic Memory Allocation

## What and why is dynamic memory allocation ?

- It is a way to allocate and deallocate memory during the runtime.

- An statically allocated variable or array has a fixed size in memory.

- We have learnt to create big enough arrays to fit in our inputs but this does'nt
  seem like an optimal way to allocate memory.

- Memory is a very useful resource.

- Clearly, we need a way to request memory on runtime.

- Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.

## Static Memory Allocation

- Allocation is done before the program execution.

- There is no memory reusability and the memory allocated cannot be freed.

- Less efficient.

## Dynamic Memory Allocation

- There is memory reusability and the allocate memory can be freed when not required.

- More efficient.

## Memory Allocation In C Programs

- Memory assigned to a program in a typical architecture can be broken down into four segments :-

1. Code : it is code segment or text segment.Text segment is a place where the code saves.

2. Static/global variables : it is divided into two segments.

a. data/initialized segment : it is used to store the initialized data.

b. bss/uninitialized segment : it is used to store the only declared global without initialization.

bss stands for block started by symbol.

3. Stack : it is part of the memory.

4. Heap : it is called dynamic memory.Using heap is called as dynamic memory allocation.

## C Program : Memory Layout

```c
#include<stdio.h>

int b = 34 ;

int ret()
{
    return 43*3 ;
}

int func1(int b1){
    static int myvar = 40 ;
    printf("The value of myvarr is %d\n",myvar);
    myvar++ ;
    return b1*myarr ;
}

int main()
{
    int b = 344 ;
    int val = func1();
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val ;
    return 0 ;
}
```

Initially some memory will be reserved for main() in the stack.This is called as the stack frame of main().The main() function takes some memory in stack which is stack frame.All the variables of main() takes space/memory in main() stack frame.

Each function get's some memory which is called as stack frame.

- All the instructions (our whole program) goes into the Code/Text segments.

- All the global variables and static variables goes into the static global/static variable segment.

- When func1() will get called than a new stack frame will be created for func1() where all the variables of func1() will take memory in stack.

- For inbuilt function also the stack frame is created because they are also functions.

- When a function is executed completely than it's stack frame is poped or removed from the stack.

## What is Stack Overflow ?

- The allocation of stack memory for the program is totally depends upon the architecture of the compiler and system.

- Compiler allocates some space for the stack part of the memory.

- When this space gets exhausted for some bad reason, the situation is called as stack overflow.

- Typical example , includes recusion with wrong/no base condition.

```c
// Recursive program that will do stack overflow.
#include<stdio.h>

void print_name(int a){
    printf("hello world %d\n",a);
    print_name(++a);
}

int main()
{
    int a = 0 ;
    print_name(++a);
    return 0 ;
}

```

## What is stack ?

It is a data structure that uses LIFO principle to store the data.

All the functions takes memory in stack memory.

It is generally smaller as compared to heap memory.

It is structured memory.

The stack memory for a progam is allocated during runtime only.

## Use Of Heap

- There are a lot of limitations of stack (static memory allocation).

- Some of the examples include variable sized array , freeing memory no longer required etc.

- Heap can be used flexibility by the programmer as per his needs.

- We use free() to free the dyanamically allocated memory.

- We can create a pointer in our main function and point to a memory block in the heap.

- The address is stored by the local variable in the main function.

- The memory consumed will not get freed automatically in case we overwrite the pointer.

```c
int *p  = new *int ; // 4 bytes memory allocated
p = NULL ; // p is now pointing to nothing but that 4 bytes in heap is still there in the heap memory and will now become garbage because we don't have it's address/reference so we can't access it.
```

```c
// Don't run this program , otherwise your laptop will hang.
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int *p = NULL :

    while(true){
        p = new *int ; // allocating 4 bytes during each iteration.
    }
}
```

## How to see the size of the different code segements.

gcc file_name.c ; size ./a.out

This command will do the following things one by one

1. compile the code
2. It will then run the "size ./a.out" command

We are using size command on the a.out or a.exe file.

size command returns the size in bytes for the text segment , data segement , bss segment and total memory that the program is taking.

dec tells the total memory that your program is taking in bytes.
