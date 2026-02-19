# Do While Loop

## What is do while loop ?

- It is a loop that is used to perform repetitive tasks.

- Here the condition is first checked.If the condition evaluates to true than the code is executed otherwise the loop stops.

Syntax :

```
while(condition){
  // code to be executed
}
```

```c
// Print from 1 to n.

#include<stdio.h>

void print_till_n(int n){
    int i = 1 ;
    while(i <= n){
        printf("%d ",i);
        i++ ;
    }
    puts("\n");
}

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    print_till_n(n);

    return 0 ;
}
```
