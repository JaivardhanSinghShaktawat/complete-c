# Break And Continue

## What is break ?

- It is used to bring the program control out of the loop.

- The break statement is used inside loops and switch statement.

- Ji loop m break statement use krenge us loop se control bahar aa jayega.

**Note :** If we have only a single statement in conditionals or for loop than we don't need to use curly braces but for readability , it is recommended to use curly braces.

```c
for(int i = 0 ; i < 10 ; i++)
  printf("%d ",i);
```

## What is continue ?

- It is used to bring the program control to the next iteration of the loop.

- The counting statement skips some code inside the loop and continue with the next iteration.

- It is mainly used for a condition so that we can skip some lines of code for a particular condition.

```c
#include<stdio.h>

int main()
{
    // break statement example

    int i , age ;
    for(i = 0 ; i < 10 ; i++){
        printf("%d \nEnter your age : ",i);
        scanf("%d",&age);
        if (age > 10){
            break ; // breaking from the current running loop.
        }
    }

    // continue statement example

    // printing 1 to 10 except 5.

    for(i = 1 ; i <= 10 ; i++){
       if(i == 5){
         continue ; // skip this iteration
       }
       printf("%d ",i);
    }

    return 0 ;
}
```
