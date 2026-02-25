#include<stdio.h>
#include "temp.c" // importing the content of the temp.c file.

int sum ; // external variables and by default initialized to 0. 
int myfunc(int a , int b){
    sum = a + b ; 
    return a+b ; 
}

extern int num = 10000 ;

int global_variable = 10 ; 

int myfunc1(int a , int b){
    // i want to use global_variable 
    extern int global_variable ; 
    return global_variable ; // returning global variable. 
}

int main()
{

    myfunc(3,5); 
    printf("The sum is %d\n",sum);

    printf("Num value is : %d\n",num);
    // Output : Num value is : 10 

    int num = 88 ; 
    printf("Num value is : %d\n",num);
    // Output : Num value is : 88

    int val = myfunc1(2,4);
    printf("Value is : %d\n",val); // Output : 10 

    return 0 ; 
}