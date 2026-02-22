#include<stdio.h>

// here printf() will print local variable b instead of printing global variable b.
int func1(int b){
    // here b is a local variable of func1().
    printf("The value of b inside func1 is %d\n",b); 
    // Output : The value of b inside func1 is 300

    printf("The address of b inside func1 is %llu\n",(unsigned long long)(&b));

    return b*10 ;  
}

// Here there is no local variable b so it will access the global variable.
int print(){
    printf("The value of b inside print() is %d\n",b);
    // Output : The value of b inside print() is 100000
}

int b = 100000 ; 

int main()
{
    int b = 300 ; 
    printf("The address of b inside main() is %llu\n",(unsigned long long)(&b));
    int val = func1(b); // b is copied to the func1().
    int *ptr = &val; 
    printf("The value of func1 is %d\n",val);

    return 0 ; 
}