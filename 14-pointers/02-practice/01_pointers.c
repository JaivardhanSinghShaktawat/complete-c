#include<stdio.h>

int main()
{
    int a = 6 ; 
    printf("The value of a is : %d\n",a); 

    int *ptr = &a ; 

    printf("Address of a = %p\nValue of ptr = %p\n",&a,ptr); 
    /* 
    Output : 
    Address of a = some hexadecimal value 
    Address of ptr = some hexadecimal value (same address as a)
    */

    printf("The value of a is : %d\n\
    The value stored at memory location pointed by ptr is : %d\n",a,*ptr); 


    // Printing the address of the pointer ptr. 
    printf("The address of the pointer ptr is : %p\n",&ptr); 
    // Output : The address of the ptr is : address in hexadecimal format. 

    printf("The value of a is : %d\n",*ptr); 
    // Output : The value of a is : 6

    // Printing the integer value into hexadecimal format using format specifiers. 
    int b = 24 ; 
    printf("%x\n",b);

    // NULL pointer example

    int *ptr2 ; 
    printf("The address pointed by ptr2 is : %p",ptr2); 
    // Output : The address pointed by ptr2 is : some garbage value in hexadecimal format

    ptr2 = NULL ; // it means ptr2 is pointing to nothing. 

    printf("The address pointed by ptr2 is : %p",ptr2); 
    // Output : The address pointed by ptr2 is : (nil) (it means pointing to nothing)

    return 0 ; 
}