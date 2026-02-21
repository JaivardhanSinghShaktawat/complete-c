# Arrays And Pointer Arithmetic

## What is pointer arithmetic ?

- Pointer arithmetic can be used to write powerful C programs.

- There are four arithmetic operations that can be used on pointers :-

a. ++
b. --
c. +
d. -

```c
int a = 5 ;

int *ptr = &a ;

ptr = ptr + 1 ;
/*
Here ptr won't add 1 to the current address , instead it will add sizeof(data_type of ptr).

ptr = ptr + 1  is equal to ptr = ptr + size(data type of ptr)

Here in this case , we will have

ptr = ptr + size(int) ==> ptr = ptr + 4

*/
```

## Pointer arithmetic rules

Suppose ptr is a pointer and if we perform arithmetic operations with it than below things will happen.

```
ptr = ptr + 1 ==> ptr = ptr + sizeof(data type of ptr)

ptr = ptr - 1 ==> ptr = ptr - sizeof(data type of ptr)

ptr++ ==> ptr = ptr + sizeof(data type of ptr)

ptr-- ==> ptr = ptr - sizeof(data type of ptr)
```

Here the address will be incremented.

If we are incrementing the value by de-referencing than the value will incremented by one.

```c
#include<stdio.h>

int main()
{
    int a = 34 ;
    int *ptr = &a ; // ptr is pointing to a.

    /*
    Note : pointer is of 8 bytes so we can't store it in int which is of 4 bytes.But
    we can store it in unsigned long long which is of 8 byte and we need to typecast
    the address into unsigned long long.
    */
    unsigned long long b = 5 ;
    printf("size of unsigned long long = %ld\n",sizeof(b));
    // Output : size of unsigned long long = 8

    printf("%lld\n",(unsigned long long)ptr);
    printf("%lld\n",(unsigned long long)(ptr+1));

    /*
    Here we will see the address in integer format and when we will do ptr+1 than
    the integer will be increment by 4 instead of 1 because ptr+1 is equal to
    ptr + sizeof(data type of pointer)
    */

    return 0 ;
}
```
