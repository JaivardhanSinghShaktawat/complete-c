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