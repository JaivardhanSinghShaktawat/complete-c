# Constants

## What are Constants ?

- A constant is a value or variable that can't be changed in the program.
- A constants is value that cannot be changed in the program.

Ex : 15.20 , 'a' , 3.6

There are two ways to define constants in C programming

1. const keyword

Syntax :

const dataType variableName = value ;

2. #define preprocessor

Sytanx :

#define NAME_OF_CONSTANT value

- No need to put semicolon here at the end.

```c
#include<stdio.h>

#define MAX_VAL 20
#define SPEED_OF_LIGHT 3.24*10e5

int main()
{
    // using const keyword to define constants variables.
    const float PI = 3.4 ;
    // PI = 46 // error will come , we can't mutate constant variables.

    /*
    MAX_VAL = 40 error will come as we can't mutate them
    Here during pre-processing compiler will put 20 in place of MAX_VAL so
    20 = 40 will become invalid.
    */

    /*
    SPEED_OF_LIGHT = 10  error will come as we can't mutate them.Here during pre-processing compiler will put 3.24*10e5 in place of SPEED_OF_LIGHT so 3.24*10e5 = 10 will become invalid.
    */
    return 0 ;
}
```
