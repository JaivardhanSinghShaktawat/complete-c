#include<stdio.h>

int main()
{
    register int a ; // requesting compiler to create this a variable inside the 
    // register present inside the CPU for faster access/retrieval. 

    a = 10 ; 

    printf("This value is stored inside the register inside the CPU : %d\n",a);
}