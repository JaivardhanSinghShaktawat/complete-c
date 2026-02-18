# Taking Input In C

## What is scanf() function ?

- scanf() function is used to take input from the user.

- It's declaration is present inside the stdio.h header file.

**Syntax :**

scanf("convergence string", address/reference of the variable);

scanf("converegence string" , &var1, &var2, &var3 , &var4);

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

  return 0 ;
}
```
