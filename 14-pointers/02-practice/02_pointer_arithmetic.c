#include<stdio.h>

int main()
{
    int a = 34 ; 
    int *ptr = &a ; // ptr is pointing to a.
    
    /* 
    Note : pointer is of 8 bytes so we can't store it in int which is of 4 bytes.But
    we can store it in unsigned long long which is of 8 byte and we need to typecast
    the address into unsigned long long.
    */
    unsigned long long b = 5 ; 
    printf("size of unsigned long long = %ld\n",sizeof(b)); 
    // Output : size of unsigned long long = 8

    printf("%lld\n",(unsigned long long)ptr); 
    printf("%lld\n",(unsigned long long)(ptr+1));

    /* 
    Here we will see the address in integer format and when we will do ptr+1 than
    the integer will be increment by 4 instead of 1 because ptr+1 is equal to 
    ptr + sizeof(data type of pointer)
    */

    return 0 ; 
}