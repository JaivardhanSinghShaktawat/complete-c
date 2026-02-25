#include<stdio.h>

int myfunc(int a , int b){
    auto int sum ; // int sum ; and auto int sum ; both are same only.
    sum = a + b ; 
    return a+b ; 
}

int main()
{

    auto int sum = myfunc(3,5); 
    // int sum = myfunc(3,5); // both are same only
    printf("The sum is %d\n",sum);
    return 0 ; 
}