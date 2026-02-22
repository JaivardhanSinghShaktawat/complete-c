# Typedef

## What is typedef ?

It is a keyword in C language that is used give alternative name to distinct data types.

typedef is used to give alias name to a variable.

Syntax :

```
typedef <previous_name> <alias_name> ;

```

```c
#include<stdio.h>
#include<string.h>

typedef struct Student{
    int id ;
    int marks ;
    char fav_char ;
    char name[34] ;
} std ;

/*
Here std is the alternative name of Student struct.
*/

int main()
{
    typedef unsigned long ul ;
    typedef int integer ;
    ul  l1 , l2 ;
    integer a = 4 ;

    printf("Value of a is %d\n",a); // Output : Value of a is 4

    // using typedef with struct

    /*
    // Normal way of declaring struct data type.

    struct Student s1 , s2 ; // declaring s1 and s2 of Student data type.
    s1.id = 1 ;
    s2.id = 10 ;
    s1.name = "hello world" ;
    */

    std s1 , s2 ; // std is an alternate name of struct Student data type.
    s1.id = 0 ;
    s2.id = 1 ;

    strcpy(s1.name,"hello world");
    strcpy(s2.name,"coding is fun");

    printf("s1 name is : %s\n",s1.name);
    // Output : s1 name is : hello world

    printf("s2 name is : %s\n",s2.name);
    // Output : s2 name is : coding is fun

    // Another usecase of typedef

    int *a , b ; // Here a is a pointer to integer and b is just an integer.
    int c = 89 ;
    a = &c ;
    b = &c ; // error will come.

    // We can use typedef

    typedef int* int_ptr ;

    int_ptr d , e // here d and e are pointer of integer type.
    d = &a ;
    e = &b ;

    return 0 ;
}
```
