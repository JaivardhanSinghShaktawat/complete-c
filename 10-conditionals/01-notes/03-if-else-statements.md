# If Else Statement

## What are if else statement ?

- They are used to execute a block of code based on some condition.

- If the condition inside the if evaluates to true than the if block is executed otherwise the else block is executed.

Syntax

```
if (condition){
   // if block
}else{
   // else block
}
```

```c
#include<stdio.h>

int main()
{
    int age ;
    printf("Enter your age : ");

    scanf("%d",&age);

    printf("You have entered %d as your age\n",age);

    if(age >= 18){
        printf("You can drive\n");
    }else{
        printf("You can't drive\n");
    }

    return 0 ;
}
```
