# Do While Loop

## What is do while loop ?

It is a loop that is used to perform repetitive tasks.

Syntax :

```
do {
    // logic
}while(condition);
```

- Here code will execute at least once even if the condition is false.

Ex :

```c
#include<stdio.h>

int main(){
  int i = 0 ;
  do {
    i = i + 1 ; // updation
    printf("%d",i);
  }while(i < 10);

  return 0 ;
}
```

Here , the block is executed first and than the condition is checked for the first time.After that if the condition is true than that block is executed otherwise the loop stops.

## When to use do while loop ?

If you want to execute the code at least once even if the condition is false than we use do while loop.

```c
// print from 1 to n

#include<stdio.h>

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    int i = 1 ;

    do{
      printf("%d\n", i);
      i++ ;
    }while(i <= n);

    return 0 ;
}
```
