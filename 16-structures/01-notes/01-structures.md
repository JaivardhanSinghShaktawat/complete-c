# Structures

## What are structures ?

- Structures are user defined data types in C.

- Using structures allows us to combine data type which contains diverse information.

- It is used to create a complex data type which contains diverse information.

- They are very similar to arrays but structure can store data of any type,which is practically more useful.

- Suppose we want to store information of 10,000 employees working at some company.

We want to store Name , Address , Email , Employee Id for each employee.

Clearly , we need some user defined data type which contains only this information.

Syntax :

```
// Syntax for defining a structure
struct [structure_name]
{
    // data_type var 1
    // data_type var 2
    // data_type var 3
}
[struture_variables] ;

// Here we are just defining the struct
struct [structure_name]
{
    // data_type var 1
    // data_type var 2
    // data_type var 3
}

Syntax for using this data type.

struct struct_name variable_name1 , variable_name2 ;
```

**Example :**

```c
// Here we have created a new data type which is Student.
struct Student{
    int id ;
    int marks ;
    char favourite_character ;
} s1 , s2 , s3;
```

We can create struct variable while defining the structure or we can create struct later on after defining them.

## Why we need structures ?

- To combine different types of data together.
- Structures are used to create a new data type.

## Declaring a structure

We can either declare a structure along with structure definition or separately.

1. Declaring structure along with the structure definition.

2. Here Employee is a custom or user defined data type just like int , char etc.

```c
#include<stdio.h>

// Here we are creating a new user defined data type and using at the same time.
struct Employee{
    int id ;
    char name[52] ;
    float marks ;
} e1 , e2;

int main()
{
    // here e1 and e2 are Employee instances/variables.
    return 0 ;
}
```

2. Declaring structure separately.

```c
#include<stdio.h>


// Here we are creating a new user defined data type and then using it separately.
struct Employee{
    int id ;
    char name[52] ;
    float marks ;
};

struct Employee s1 , s2 ;

int main()
{
    // here a and b are Employee instances/variables.
    struct Employee a , b ;

    // here s1 and s2 are Employee instances/variables.

    return 0 ;
}
```

## Initializing a structure

We can initialize a structure either along with structure definition or separately.

```c
#include<stdio.h>

// Defining a new/custom data type.
struct Employee{
    int id ;
    float marks;
}

int main()
{
    // First Way : Initializing each field separately.
    struct Employee e1 ;
    e1.id = 15 ;
    e1.marks = 40.26 ;

    // Second Way : Initializing all the values at once.

    struct Employee e2 = {18 , 220.40} ;

    return 0 ;
}
```

## Accessing structures members/fields.

- Array elements are accessed using the subscript variable.

- In a similar fashion,structure members are accessed using dot[] operator.

- (.) is called as "structure member operator"

- To access the member of the structure, we use this operator in between "Structure name" & "member name"

```c
#include<stdio.h>
#include<string.h>

// We have defined a new user defined data type.
struct Student
{
    int id ;
    int marks ;
    char fav_char ;
    char name[32] ;
} std1 , std2 ;
// std1 and std2 are variable of Student data type.

// Here s1 is a global variable of Student data type.
struct Student s1 ;

void print(){
    strcpy(s1.name,"Hello World");
    printf("%s\n",s1.name); // Output : Hello World
}

int main()
{
    // declaring variables of Student data type.
    struct Student c_language , rust_language ;

    // Initializing the c_language variable of Student data type separately.
    c_language.id = 0 ;
    c_language.marks = 99 ;
    c_language.fav_char = 'C' ;

    // Initializing the rust_language variable of Student data type at once.
    rust_language = {1,100,'R'} ;

    strcpy(c_language.name,"C programming language");

    printf("c_language got %d marks\n",c_language.marks);

    printf("c_language name is %s\n",c_language.name);

    // Printing the complete information of c_language variable.

    printf("c_language has id : %d\n",c_language.id);
    printf("c_language got %d marks\n",c_language.marks);
    printf("c_language favourite character is %c\n",c_language.fav_char);

    print();

    return 0 ;
}
```
