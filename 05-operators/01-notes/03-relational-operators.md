# Relational Operators

## What are relational operators ?

They are used to compare two or more values.They return boolean value i.e true or false or 0 and 1.

```
< : less than
> : greater than
<= : less than or equal to
>= : greater than or equal to
== : is equal to
!= : is not equal to
```

```c
#include<stdio.h>

int main()
{
    int a , b ;
    a = 34 ;
    b = 6 ;

    printf("a == b = %d \n",a==b);
    printf("a > b = %d \n",a>b);
    printf("a < b = %d \n",a<b);
    printf("a >= b = %d \n",a>=b);
    printf("a <= b = %d \n",a<=b);
    printf("a != b = %d \n",a!=b);

    /*
    Output :

    a == b = 0
    a > b = 1
    a < b = 0
    a >= b = 1
    a <= b = 0
    a != b = 1
    */

    return 0 ;
}
```
