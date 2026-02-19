#include<stdio.h>

int main()
{
    // break statement example 

    int i , age ; 
    for(i = 0 ; i < 10 ; i++){
        printf("%d \nEnter your age : ",i); 
        scanf("%d",&age); 
        if (age > 10){
            break ; // breaking from the current running loop.
        }
    }

    // continue statement example 

    // printing 1 to 10 except 5.

    for(i = 1 ; i <= 10 ; i++){
       if(i == 5){
         continue ; // skip this iteration 
       }
       printf("%d ",i);
    }

    return 0 ; 
}