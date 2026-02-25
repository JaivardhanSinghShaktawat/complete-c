# Storage Classes

## What are Storage classes ?

- A Storage class defines the scope , default initial value and lifetime of variable.

- A storage class defines following attributes about a variable in C :

1. Scope : the region or area of the prgoram where variables exist or defined and outside that environment those variables are not accessible.

1. local scope : inside the functions.
1. global scope : defining variables globally outside any function.

1. Default initial value : the default initial value of variables.When we declare a variable than the value stored by that variable is called as default initial value.

1. Lifetime : the time period till which the variable will remain in the program.
   Ex : static and global variables remains throughout the program so there lifetiem is throughout the program.

- In dynamic memory allocation , we can change the size of a data structures during the runtime.

- We use dynamic memory allocation to allocate and deallocate memory in heap memory.

- Memory assigned to a program in a typical architecture can be broken down into four segments :-

1. Code Segment
2. Global/static variables
3. Stack
4. Heap

## Types of Storage classes

In C language , following storage classes are most oftenly used :

1. Automatic Variables
2. External Variables
3. Static Variables
4. Register Variables

Storage in storage classes means to store the data.

Differnet storage classes have different scopes , default initial values and
lifetimes.

## 1. Automatic Variables : Automatic Storage Class

We use auto keyword to create automatic variables.

Scope : local to the function body they are defined in

Default value : Garbage value (a random value)

Lifetime : till the end of a function block they are defined in

A variable defined without any storage class specifiction is by default an automatic variable.

All the variables that we declare in C are by default declared using automatic storage classes as default.

int x ; and auto int x ; both are same.

```c
int num ;
auto int num1 ;

char ch ; // it is also declared using automatic storage class
double d ; // it is also declared using automatic storage class

// Both num and num1 are defined using automatic storage class.
```

automatic variables are accessible in the function block where they are declared.They are local variables.

## 2. External Variables : External Storage Class

We use extern keyword to create external variables.

They are same as global variables.

Scope : Global to the program they are defined in.

They have global scope.External variables are accessible throughout the programs because they are global variables.

Default initial value : 0

Lifetime : These variables are declared outside any function.They are available throughout the lifetime of the program.

A global variable can be changed by any function in the program.

int num ; written outside any function globally will tell compiler that num is a global variable.

It is recommended to minimize the use of unnecessary global variables in a program.
We need to minimize the unnecesarry use of global and static variables because they remain in the memory throughout the lifecycle of the program.

If we need memory we can use dynamic memory allocation to allocate and de-allocate the memory.

extern keyword is used to inform our C compiler that a given variable is declared somewhere else.

extern int num ; // it is just telling compiler that num ka declaration kahi aur
present h.This line won't take memory in the program.

Using extern will not allocate space for the variable.

extern keyword tells compiler that the declaration of the variable is present somewhere else.

Example :

```c
int num = 90 ; // it is present in num.c file.
```

```c
#include "num.c"
extern int num ;

int main()
{
   num = 10 ;
   printf("%d",num);
}
```

## 3. Static Variables : Static Storage Class

we use static storage classes to create static variables.

Scope : Local to the block they are defined in.They are accessible within the function or block in which they are declared.

Static variables preserve the value even when they go out of the scope.

Default Initial Value : 0

Lifetime : They are available throughout the lifetime of the program.

A static variable remains under existence for use within the function for the entire program run.

static int num ; written inside any function will tell compiler that num is a static variable.

It is recommended to minimize the use of unnecessary static variables in a program because static variables remains in the memory throughout the lifecycle of the program.

## 4. Register Variables : Register Storage Class

Register is a part of the CPU (Processor).Those variables are stored inside registers that are used very fast.Variables present inside the register are very close to the processor or CPU.

Once the function is finished completely than all the local variables as well as register variables are also removed from the memory and registers.

Register storage classes are used to declare register variables.

Scope : Local to the function they are declared in.

Default Initial Value : Garbage value

Lifetime : They are available till the end of the function block in which the variable is defined.

Register variables requests the compiler to store the variable/value in the CPU registers instead of storing in the memory (RAM) to have faster access.

Generally , this is done for the variables which are being used frequently.

register keyword is used to declare register variables.The register variables request compiler to store the value inside the CPU registers instead of storing it in memory for faster access.

we use register storage classes to create register variables.

## Real meaning of Declaration Vs Definition

Declaration : telling the compiler about the variables (no space is reserved in memory).

Definition : Declaration + space reservation
