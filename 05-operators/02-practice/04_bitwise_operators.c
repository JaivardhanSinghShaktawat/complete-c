#include<stdio.h>

int main()
{
    int a , b ; 
    a = 2 ; 
    b = 3 ; 

    // 010 & 011 = 010
    printf("%d\n",a&b); // Output : 2 

    // 010 | 011 = 011
    printf("%d\n",a|b); // Output : 3

    // 010 ^ 011 = 001
    printf("%d\n",a^b); // Output : 1
    
    return 0 ; 
}