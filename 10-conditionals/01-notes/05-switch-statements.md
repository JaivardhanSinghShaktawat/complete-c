# Switch Statements

## What are switch statement ?

It is an alternative of if else if statement.

If no case value matches with the actual value than the default block is executed.

After every block we put break otherwise if any case will match with the value than that block of code as well as all the case below it will get execute.So , break is used to exit the switch statement.

## Rules for switch statements

- The switch expression can either be integer or character.
- The case value of switch can either be integer or character.
- case must come inside switch.
- break statements are not mandatory.They are just used to exit the switch statement because if we don't write the break than switch will run all the cases present below the current matched case and at end it will also execute the default case.

```
int x = 10 ;
switch(x){

}

// it is correct.
```

```
float f = 10 ;
switch(f){

}

// it is wrong
```

Syntax :

```
switch(val){
    case case_val :  block of code
                     break ;


    case case_val :  block of code
                     break ;


    case case_val :  block of code
                     break ;


    case case_val :  block of code
                     break ;

    default : block of code
              break
}
```

```c
#include<stdio.h>

int main()
{
    int age ;
    printf("Enter you age : ");
    scanf("%d",&age);

    switch(age){
        case 3 :
            printf("The age is 3\n");
            break ;

        case 13 :
            printf("The age is 13\n");
            // break ;

        case 23:
            printf("The age is 23\n");

        default :
            break ;
    }

    return 0 ;
}
```
