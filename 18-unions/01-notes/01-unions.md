# Unions

## What are unions ?

- Unions and structrues are almost similar.

- Union is user defined data type (very similar to structures)

- The difference between structures and unions lies in the fact that in structure, each memeber has it's own storage location, whereas members of a union uses a single shared memory location.

- This single shared memory location is equal to the size of it's largest data memeber.

```c
struct Employee{
    int id ; // 4 bytes
    char name[34] ; // 34 bytes
};

// Total size of Employee is 38 bytes.
```

- The memebers/fields of unions shares the same memory.The size of the memory is equal to the size of the largest data type field/member in the unions.

```c
struct Employee{
    int id ; // 4 bytes
    char name[34] ; // 34 bytes
};
```

## Declaring and accessing union memebers

- Like structures , we access any memeber by using the memeber access operator(.) in unions.

- We use keyword union to define a union.

- Syntax is very similar to that of structure.

Syntax of union : Defining union is same as structure.

```
// defining union

union UnionName {
    data_type variable1 ;
    data_type variable2 ;
    data_type variable3 ;
    and so on.
}

// defining union and declaring the variables.
union UnionName {
    data_type variable1 ;
    data_type variable2 ;
    data_type variable3 ;
    and so on.
} u1 , u2 ;
```

## Union cannot handle all the memebers at once

Structure Example

```c
struct Student{
    float marks ; // 4 bytes
    int id ; // 4 bytes
} s1 ;
```

Total size of s1 is 8 bytes.

Unions Example

```c
union Student{
    float marks ; // 4 bytes
    int id ; // 4 bytes
} s1 ;
```

Total size of s1 is 4 bytes.

4 bytes of memory is shared between id and marks.Here id and marks will share the same memory location.

## Why we even need unions if we have structures ?

- Unions saves a lot of memory and makes our program efficient.

- For better memory management we can use unions.

- If we have defined 4 fields and we are using only one at a time than we can use unions.

```c
#include<stdio.h>
#include<string.h>

union Student{
   int id ;
   int marks ;
   char fav_char ;
   char name[34] ;
};

int main()
{
    union Student s1 ;
    s1.id = 1 ; ;
    s1.marks = 100 ;
    s1.fav_char = 'A' ;
    strcpy(s1.name,"hello world");

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The favourite character is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);

    /*
    The id is 1819043176
    The marks is 1819043176
    The favourite character is h
    The name is hello world

    Here all the values are corrupted and only the name is saved.It is because all
    the fields/memeber of union shares the same memory.

    The last field of the union that we have updated will remain saved and all will
    take garbage values.
    */

    s1.fav_char = 'A' ;

    /*
    Now , fav_char will take 'A' and all the fields of the union Student will become
    garbage value.
    */

    s1.id = 10 ;

    /*
    Now , id will take 10 and all the fields of the union Student will become
    garbage value.
    */

    return 0 ;
}
```
