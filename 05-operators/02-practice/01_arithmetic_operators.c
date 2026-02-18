#include<stdio.h>

int main()
{
    int a , b ; 
    a = 34 ; 
    b = 6 ; 

    printf("a + b = %d \n",a+b);
    printf("a - b = %d \n",a-b);
    printf("a * b = %d \n",a*b);
    printf("a / b = %d \n",a/b);
    printf("a mod b = %d \n",a%b);

    /* 
    Output : 

    a + b = 40 
    a - b = 28 
    a * b = 204 
    a / b = 5 
    a mod b = 4
    */

    a = 34 ; 
    float c = 6.34 ; 


    printf("a + b = %f \n",a+c);
    printf("a - b = %f \n",a-c);
    printf("a * b = %f \n",a*c);
    printf("a / b = %f \n",a/c);
    // printf("a mod b = %f \n",a%c); // here error will come 

    /* 
    Output : 

    a + b = 40.340000 
    a - b = 27.660000 
    a * b = 215.559998 
    a / b = 5.362776
    */

    return 0 ; 
}