# Assignment Operators

## What are assignment operators ?

Assignment operators assigns the value to the variable.They assign the right value to the left variable.

```
= : simple assignment operator.Assigns value from right side operands to left side operands

+= : Add AND assignment operator.It adds the right value to the left operand and assign the result to the left operand.It first add left and right operand and than assign the result to the left variable.

-= : Subtract AND assignment operator.It subtracts the right operand from the left operand and the result is assigned to the left operand.

*= Multiply AND assignment operator.It multiplies the right operand with the left opreand and the result is assigned to the left operand.

/= Divide AND assignment operator.It divides the left operand with the right operand and the result is assigned to the left operand.

%= Modulo AND assignment operator.It divides the left operand with the right operand and the remainder is assigned to the left operand.

```

```c
#include<stdio.h>

int main()
{
    int a , b ;
    a = 2 , b = 4 ;

    a += 6 ; // a  = a + 2 = 8
    a -= 5 ; // a = a - 5 = 3
    a *= 2 ; // a = a * 2 = 6
    a /= 2 ; // a = a / 2 = 3
    a %= 2 ; // a = a % 2  = 1

    printf("%d",a);

    return 0 ;
}
```
