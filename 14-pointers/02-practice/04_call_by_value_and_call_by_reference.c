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