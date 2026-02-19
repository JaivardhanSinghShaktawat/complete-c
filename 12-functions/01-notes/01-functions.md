# Functions

## What is a function ?

- Functions are used to divide a large C program into smaller pieces.

- A function can be called multiple times to provide reusability and modularity to the C program.

- Also called procedure or subroutine.

Syntax :

```
return_type function_name(data_type paramter1 , data_type parameter2 , ...){
    // code to be executed
}
```

## Advantages of functions

- We can avoid rewriting same logic through functions.

- We can divide work among programmers using functions.

- We can easily debug a program using functions.

## Declaration , definition and call

- A function is declared to tell the compile about it's existence.

- A function is defined to get some task done.

- A function is called in order to be used.

## Types of functions

1. Library functions : functions included in c header files.

2. User defined functions : functions created by C programmers to reduce complexity of a program.

## Function code examples

1. Without arguments and without return value.
2. Without arguments and with return value.
3. With arguments and without return value.
4. With arguments and with return value.

```c
#include<stdio.h>

int sum(int a , int b); // declaring function
void print_star(int);

// without argument and with return type
int take_number(){
    int i ;
    printf("Enter a number : ");
    scanf("%d",&i);
    return i ;
}

// without argument and without return type.
void print_hello_world(){
    printf("Hello World\n");
}

int main()
{
    int a , b ;

    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);

    int c = sum(a,b);

    printf("\nThe sum of %d and %d is %d\n",a,b,c);

    print_star(10);

    int new_num = take_number();
    printf("%d\n",new_num);

    print_hello_world();

    return 0 ;
}

// with argument and with return type.
int sum(int a , int b){
    return a + b ;
}

// with argument and without return type.
void print_star(int n){
    for(int i = 1 ; i <= n ; i++){
        printf("%c",'*');
    }
    printf("\n");
}
```
