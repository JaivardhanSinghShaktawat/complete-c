# If Else If Else Statement

## What are if else if else statement ?

- When we have multiple conditions and we want to make decisions based on those conditions than we use if else if else statement.

- They are used to execute a block of code based on some condition.

- If the condition inside the if evaluates to true than the if block is executed otherwise the else if block condition is checked.If no condition matches than the else block is executed.

Syntax

```
if (condition){
    // if block
}else if(condition){
    // else if block
}else if(condition){
    // else if block
}else if(condition){
    // else if block
}else{
    // else block
}
```

```c
#include<stdio.h>

int main()
{
    unsigned short weekday ; 
    printf("Enter week day : ");
    
    scanf("%hd",&weekday); 

    if(weekday == 1){
        printf("Monday\n");
    }else if(weekday == 2){
        printf("Tuesday\n");
    }else if(weekday == 3){
        printf("Wednesday\n");
    }else if(weekday == 4){
        printf("Thursday\n");
    }else if(weekday == 5){
        printf("Friday\n");
    }else if(weekday == 6){
        printf("Saturday\n");
    }else if(weekday == 7){
        printf("Sunday\n");
    }else{
        printf("Please enter correct weekday\n");
    }

    return 0 ; 
}
```
