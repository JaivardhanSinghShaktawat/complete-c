# TypeCasting

## What is typecasting ?

Conversion of one data type into another data type is called as typecasting.

To typecast/convert one data type into another data type , we use the typecast () operator.

Syntax :

(dataType) variableName/value ;

```c
#include<stdio.h>

int main()
{
    int a = 3 ;
    float b = 54 ;

    printf("The value of a is : %d\n",a);
    // Output : The value of a is : 3

    // printf("The value of b is : %d\n",b);
    // Output : compile time error will come.

    printf("The value of b is : %f\n",b);
    // Output : The value of b is : 54.000000

    // Here we are typecasting float data type into integer data type.
    printf("The value of b is : %d\n", (int) b);
    // Output : The value of b is : 54

    float res = 54/5 ;
    printf("%f\n" , res); // Output : 10.000000

    /*
    Here 54 and 5 both are integers so if we perform arithmetic operations between two
    integers than we get integers only.
    */

    res = 54/(float)5 ; // converting one of the value into float to get the result in float.
    printf("%f\n",res); // Output : 10.800000

    return 0 ;
}
```
