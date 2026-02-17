# Variables

## What are Variables ?

- Variables are containers that are used to store some value.
- A name given to a memory location.
- Variable is the name given to the memory location where data is stored.

Syntax :

dataType variableName ; // declaring a variable

dataType variableName = value ; // declaring and initializing the variable.

**Note :** Computer stores everything in 0's and 1's.

## What is declaring variables means ?

It means we tell compiler to reserve this much space.

int a ;

It means compiler will reserve a space of 4 bytes.

## What is initializing means ?

It means we tell compiler to reserve this much space and assign this value.

int a = 10 ;

It means compiler will reserve a space of 4 bytes and will store 10 in those 4 bytes.

```c
#include<stdio.h>

int main()
{
    // declaring variables

    int a ; // decaring a single variable
    int b , c , d ; // declaring multiple variables at once


    // declaring and initializing variables

    int e = 10 ;
    int f = 1 , g = 2 , h = 5 ;
}
```

## Rules for defining variable names

- Can contain alphabets , digits , underscore and dollar.
- A variable name can start with an alphabet , underscore and dollar only.
- Variable name can't start with digits.
- No whitespace & reserved keywords is allowed.
- We can't use special symbols.

```c
#include<stdio.h>

int main()
{
    // valid variable names
    int $num = 10 ;
    int num = 5 ;
    int num4 = 10 ;
    int _first_number = 10 ;
    int _number_5 = 10 ;

    // invalid variable names
    char long ;
    int float ;
    int 5number ;
}
```
