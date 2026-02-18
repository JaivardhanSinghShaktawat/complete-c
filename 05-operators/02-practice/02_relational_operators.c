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