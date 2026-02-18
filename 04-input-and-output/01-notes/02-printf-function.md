# Output The Result In C

## What is printf() function ?

- printf() function is used to output the result in the console.

- It's declaration is present inside the stdio.h header file.

**Syntax :**

printf("only string");

printf("convergence string", variableName);

printf("converegence string" , var1, var2, var3 , var4);

- % is called as convergence operator.

- d stands for integer type.

```c
#include<stdio.h>

int main()
{
  int a , b , c ;
  printf("Enter the value of a : ");
  scanf("%d",&a);

  printf("Enter the value of b : ");
  scanf("%d",&b);

  printf("Enter the value of c : ");
  scanf("%d",&c);

  printf("The value of a is %d \n" , a);
  printf("The value of a is %d \n" , b);
  printf("The value of a is %d \n" , c);

  return 0 ;
}
```
