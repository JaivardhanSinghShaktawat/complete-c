# More Operators

1. sizeof() : it returns the size of the variable on that architecture.

Ex : sizeof(a) , where a is integer , will return int size on that architecture.

2. & : it is called as ampersand or address of operator.It returns the address of the variable.

Ex : &a ; returns the actual address of the variable

3. star : it is dereference operator.It is a pointer to a variable.

```
Ex : *a ;
```

4. ?: : conditional expression.it is ternary operator.

Ex : if condition is true ? then value X : otherwise value Y ;

**Note :** The size of the data types and pointer variable depends upon the compiler and the architecture/machine on which program is running.

```c
#include<stdio.h>

int main()
{
    int a = 4 ;
    int size = sizeof(a) ;

    printf("size of a is = %d\n",size); // Output : size of a is = 4

    int *p = &a ; // p is pointer to integer.
    // p stores the address of a.

    // p is used to print the address stored by the pointer.
    printf("%p \n",p); // Output : address of a in hexadecimal format.

    int b = a > 2 ? 1 : 0 ;
    printf("%d \n",b); // Output : 1

    return 0 ;
}
```
