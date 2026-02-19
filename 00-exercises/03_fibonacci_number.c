// Write a program to find the fibonacci number through recursion and loop.

#include<stdio.h>

// recursive solution
int fib_no(int n){
    if(n < 0) return -1 ; 
    if(n <= 1) return n ; 

    return fib_no(n-1)+fib_no(n-2);
}

// iterative solution.
int fib_no_iterative(int n){
    if(n < 0) return -1 ; 

    if(n <= 1) return n ; 

    int second_prev = 0 , prev = 1 ; 
    int curr = -1 ; 
    for(int i = 2 ; i <= n ; i++){
        curr = second_prev + prev ; 
        second_prev = prev ; 
        prev = curr ; 
    }
    return curr ;
}

int main()
{
    int n ; 
    printf("Enter the number : "); 
    scanf("%d",&n);
    
    int num = fib_no(n); // recursive function
    printf("%d fibonacci number is : %d\n",n,num);
    
    num = fib_no_iterative(n); // iterative function
    printf("%d fibonacci number is : %d\n",n,num);

    return 0 ; 
}