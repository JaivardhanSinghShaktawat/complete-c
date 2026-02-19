#include<stdio.h>

int factorial(int number){
    // base case 
    if(number == 0 || number == 1) return 1 ; 

    return (number*factorial(number-1)); 
}

int main()
{
    int n ; 
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int fact = factorial(n);
    printf("The factorial of %d is %d\n",n,fact); 

    return 0 ;
}