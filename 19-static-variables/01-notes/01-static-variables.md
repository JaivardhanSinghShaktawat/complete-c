# Static Variables

## What is scope ?

- Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.

## What are local variables ?

- Variables which are accessed inside a function or a block are called as local variables.

- They can only be accessed by the function they are declared in.

- They are inaccessible to the functions outside the function they are declared in.

```c
#include<stdio.h>

int main()
{
    int a , b ; // a and b are local variable.
    return 0 ;
}
```

## What are global variables ?

- These are the variables defined outside the main method.

- Global variables are accessible throughout the entire program from any function.

- If a local and global variable has the same name, the local variable will take preference.

```c

#include<stdio.h>

int a , b ; // a and b are global variable.
int c = 10 ;
int main()
{
    int c = 100 ;
    printf("%d",c); // Output : 100
    return 0 ;
}
```

## What are static variables ?

- Static variables are variables which have a property of preserving their values even when they go out of scope.

- They preserve their value from the previous scope and are not initialized again.

- Static variable remains in memory throughout the span of the program.

- Try to avoid the use of global and static variables.

- Static variables cannot be re-initialized.

- Static variables are initialized to 0 if not initialized explicitly.

- Static variables needs to be initialized to constant literals.

- In C , static variables can only be initialized using constant literals.It means that we can't do something like this.

static int var = function();

- We use static keyword to define static variables.

Syntax :

static data_type variable_name = value ;

```c
#include<stdio.h>

int return_num(){
    return 10 ;
}

int increment(){
    static int a = 5 ; // it will run only once when increment() will be called
    // for the first time.After that if increment() is called than this line will
    // be skiped because static variable a is already declared and initialized.And
    // a will preserve the value even if the increment() finished completely.Static
    // variables remain in memory throughout the complete program.
    a++ ;

    printf("The value of a is %d\n",a);

    // static int val = return_num(); error will come because we can initialize the
    // static variables to constants values only.

    return a ;
}

int main()
{
    for(int i = 1 ; i <= 10 ; i++){
        printf("%i ",increment());
    }

    /*
    Output : 5 6 7 8 9 10 11 12 13 14 15
    */

    printf("\n");
    static int static_var ; // it is initialized to 0 by default

    printf("Default value of static variable is %d\n",static_var);
    // Output : Default value of static variable is 0

    return 0 ;
}
```
