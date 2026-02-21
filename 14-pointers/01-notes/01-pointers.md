# Pointers

## What are pointers ?

- It is a data type that stores the address of another variable.

- Variable which stores the address of another variable.

- Can be of type int , char , array , function , or any other pointer.

- We also have function pointers.

- Size depends on the architecture.Ex 2 bytes for 32 bits and 8 bytes for 64 bits.

- Pointer in C programming language can be declared using asterik symbol.

Syntax :

```
data_type *pointer_variable_name ; // declaring a pointer variable.
```

```c
int a = 5 ; // a is an integer variable.
int *p = &a ; // p is a pointer to integer.


// p2 is a pointer to a pointer.
int **p2 = &p ; // p2 is a pointer to another integer pointer.
```

## Why we need pointers ?

- Used in data structures i.e linked list , stack , queues , binary trees etc.
- Dynamic memory allocation : allocating and de-allocating memory during runtime.
- Arrays , Functions , Structures
- Return multiple values from a function
- Pointer reduces the code and improves the performance.

## & and \* operators

- The address of operator '&' returns the address of the variable.

- The \* is the de-reference operator (also called indirection operator) used to get the value at a given address.

```c
int a = 6 ;
int *p = &a ; // &a returns the address of the a variable.

printf("%d",*p); // Output : 6
```

- The %x prints the integer data or address into hexadecimal format.

- The %p prints the address of the variable in hexadecimal format.

```c
#include<stdio.h>

int main()
{
    int a ;
    printf("The value of a is : %d\n",a);
    // The value of a is : some garbage value will come
    return 0 ;
}
```

## NULL Pointer

- A pointer that is not assigned any value but NULL is known as the NULL pointer.

- In computer programming , a null pointer is a pointer that does not point to any object or function.

- A pointer that stores nothing is called as NULL pointer.

- We can use it to initialize a pointer variable when that pointer variable is'nt assigned any valid address yet.

- NULL means nothing.It means kuch nhi.

Syntax :

```c
int *ptr = NULL ; // ptr is pointing to nothing.
```

```c
#include<stdio.h>

int main()
{
    int a = 6 ;
    printf("The value of a is : %d\n",a);

    int *ptr = &a ;

    printf("Address of a = %p\nValue of ptr = %p\n",&a,ptr);
    /*
    Output :
    Address of a = some hexadecimal value
    Address of ptr = some hexadecimal value (same address as a)
    */

    printf("The value of a is : %d\n\
    The value stored at memory location pointed by ptr is : %d\n",a,*ptr);


    // Printing the address of the pointer ptr.
    printf("The address of the pointer ptr is : %p\n",&ptr);
    // Output : The address of the ptr is : address in hexadecimal format.

    printf("The value of a is : %d\n",*ptr);
    // Output : The value of a is : 6

    // Printing the integer value into hexadecimal format using format specifiers.
    int b = 24 ;
    printf("%x\n",b);

    // NULL pointer example

    int *ptr2 ;
    printf("The address pointed by ptr2 is : %p",ptr2);
    // Output : The address pointed by ptr2 is : some garbage value in hexadecimal format

    ptr2 = NULL ; // it means ptr2 is pointing to nothing.

    printf("The address pointed by ptr2 is : %p",ptr2);
    // Output : The address pointed by ptr2 is : (nil) (it means pointing to nothing)

    return 0 ;
}
```
