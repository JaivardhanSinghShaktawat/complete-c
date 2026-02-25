#include<stdio.h>

int increment_val(){
    static int a ; // initialized to 0 by default. 
    a++ ; 
    return a ; 
}

int main()
{

    for(int i = 1 ; i <= 10 ; i++){
        printf("The value of a inside increment_val() at %d index is : %d\n",i,increment_val()); 
    }

    /* 
    The value of a inside increment_val() at 1 index is : 1
    The value of a inside increment_val() at 2 index is : 2
    The value of a inside increment_val() at 3 index is : 3
    The value of a inside increment_val() at 4 index is : 4
    The value of a inside increment_val() at 5 index is : 5
    The value of a inside increment_val() at 6 index is : 6
    The value of a inside increment_val() at 7 index is : 7
    The value of a inside increment_val() at 8 index is : 8
    The value of a inside increment_val() at 9 index is : 9
    The value of a inside increment_val() at 10 index is : 10
    */

    return 0 ; 
}