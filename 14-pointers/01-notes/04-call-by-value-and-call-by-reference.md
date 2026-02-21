# Call By Value And Call By Reference

## Actual and formal parameters

- When a function is called , the values (expressions) that are passed in the call are called the arguments or actual parameters.

- Formal parameters are local variables which are assigned values form the arguments when the function is called.

## Local variables

These are the variables that are not accessible anywhere in the whole program.

## Global variables

These are the variables that are accessible from anywhere in the whole program.They are generally declared globally outside the main function.

## Types of function calls in C programming

In C programming language , we can call a function in two different ways , based on how we specify the arguments, and these two ways are :-

- Call by value
- Call by reference

1. Call by value : the values that we pass to the functions are passed by value.The values are copied to the function.

When we call a function by value,it means that we are passing the values of the arguments which are copied into the formal parameters of the functions.

Which means that the original values remain unchanged and only the parameters inside the function changes.

2. Call by reference : instead of passing the values to the functions , we pass the copy of the address of the variables to the function as actual argument.

The call by reference method of passing arguments to a C function copies the address of the arguments into the formal parameters.

Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments.

```c
#include<stdio.h>

// swap means exchange.
// it is a good example of call by reference
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

int main()
{
    int a , b ;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of a : ");
    scanf("%d",&b);

    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d and b = %d\n",a,b);

    return 0 ;
}
```

```c
#include<stdio.h>

// call by reference example in C.
void change_value(int *a){
    *a = 300 ;
}

// call by value example
int sum(int a , int b){
    return a + b ;
}

/*
Given two numbers a and b , add them , subtract them and assign them to a and b.
do a = a + b and b = a - b by using call by reference.
a = 4 , b = 1

a = 5
b = -3
*/

void arithmetic_operations(int *a , int *b){
    *a = *a + *b ;
    *b = *a - *b ;
}

int main()
{
    int a = 34 , b = 56 ;

    printf("a = %d\n",a); // Output : a = 34

    // here the address of the a is copied to the change_value().
    change_value(&a);

    printf("a = %d\n",a); // Output : a = 300

    // here the value of the a and b is copied to the sum().
    int ans = sum(a,b);
    printf("sum = %d\n",ans);

    a = 2 , b = 3 ;

    printf("a = %d and b = %d\n",a,b); // Output : a = 2 and b = 3
    arithmetic_operations(&a,&b);
    printf("a = %d and b = %d\n",a,b); // Output : a = 5 and b = 2

    return 0 ;
}
```
