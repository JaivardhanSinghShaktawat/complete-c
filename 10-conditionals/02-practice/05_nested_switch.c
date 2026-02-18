#include<stdio.h>

int main()
{
    int age , marks ;
    printf("Enter you age : ");
    scanf("%d",&age); 

    printf("Enter you marks : ");
    scanf("%d",&marks); 

    switch(age){
        case 3 :
            printf("The age is 3\n");
            switch(marks){
                case 46 : 
                   printf("You marks are 46\n");
                   break ; 
                
                default : 
                   printf("You marks are not 46\n"); 
            }
            break ; 

        case 13 : 
            printf("The age is 13\n");
            break ; 

        case 23: 
            printf("The age is 23\n"); 

        default : 
            break ; 
    }

    return 0 ; 
}