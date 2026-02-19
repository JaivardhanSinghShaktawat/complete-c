# For Loops

## What use for loop ?

- The for loop is used to iterate the statements or a part of the program several times.

- It is used to traverse the data structures like the arrays and linked lists.

- It has a little different syntax than while and do while loop.

Syntax :

```
for(initialization ; condition ; updation){
    // code to be executed
}
```

**Note :** We can initialize more than one variable and we can update multiple variables at the same time in for loop.

We can have more one condition.The conditional part is also optional.We can write the condition in code block and can exit the loop by using the break keyword.

If we are writing more than one condition than the loop will exit only if the last condition becomes false.

**Note :** In C , all the non-zero values are true and zero value is consider as false.

## How for loop works ?

For the first time , the initialization happens and after that the condition is checked.If the condition evaluates to true than the code is executed and after that updation happens.After updation the condition is checked.If the condition evaluates to true than the code is executed and after that updation happens and this thing repeats till the condition is true.

```c
// Print from 1 to n.
#include<stdio.h>

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){
        printf("%d ",i);
    }
    return 0 ;
}
```
