#include<stdio.h>

int main()
{
    int a = 4 ; 
    int size = sizeof(a) ; 

    printf("size of a is = %d\n",size); // Output : size of a is = 4

    int *p = &a ; // p is pointer to integer.
    // p stores the address of a. 

    // p is used to print the address stored by the pointer.
    printf("%p \n",p); // Output : address of a in hexadecimal format.

    int b = a > 2 ? 1 : 0 ; 
    printf("%d \n",b); // Output : 1 

    return 0 ; 
}