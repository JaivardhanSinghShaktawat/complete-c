# Goto Statements

## What is goto statement ?

- Also called as jump statement in C.

- Used to transfer program control to a predefined label.

- It's use is avoided since it causes confusion for the fellow programmers in understanding the code.

- Goto statement is prefereable when we need to break multiple loops using a single statement at the same time.

- We define a label and we use goto with label.

- try to avoid using goto statement as it creates confusion.

Syntax :

```
label :
   // code inside label


goto label ;
```

**Example 1**

```c
// It will run infinite times.
#include<stdio.h>

int main()
{
    label:
      printf("we are inside label");

    goto label ;

    return 0 ;
}
```

**Example 2**

```c
#include<stdio.h>

int main()
{
    label:
      printf("we are inside label\n");
      goto end ;

    printf("hello world\n");

    end:
      printf("we are at the end\n");

    return 0 ;
}
```

## When to use goto statements ?

We use goto statements when we want to break multiple nested loops by using a single statement.

**Example :**

```c
#include<stdio.h>

int main()
{

    label:
      printf("we are inside label\n");
      goto end ;

    printf("hello world\n");

    end:
      printf("we are at the end\n");

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            if(i == 5){
              printf("The value of i is 5 and we are breaking from all loops\n");
              goto end ; // breaking all loops using a single statement.
            }
        }
    }

    end:
      printf("All loops are exited\n");
    return 0 ;
}
```
