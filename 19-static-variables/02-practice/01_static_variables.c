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