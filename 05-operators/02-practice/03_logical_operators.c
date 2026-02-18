#include<stdio.h>

int main()
{
    printf("%d \n",4 && 5); // Output : 1
    printf("%d \n",4 && 0); // Output : 0
    printf("%d \n",4 || 5 || 0); // Output : 1
    printf("%d \n",!4); // Output : 0
    printf("%d \n",!0); // Output : 1

    /* 
    Here 1 means true and 0 means false.
    */
    return 0 ; 
}