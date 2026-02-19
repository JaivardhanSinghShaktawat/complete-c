// Print from 1 to n.
#include<stdio.h>

int main()
{
    int n ; 
    printf("Enter a number : "); 
    scanf("%d",&n);

    int i , j ; 
    for( i = 1 , j = 1 ; i <= n ; i++,j++){
        printf("i = %d and j = %d\n",i,j);
    }

    i = 0 ; 
    for( ; i <= n ; i++){
        printf("%d ",i);
    }

    /* 
    Here if a becomes greater than 4 than loop won't break.When the last condition will
    become false i.e when b equal to 6 than the loop will break.So,loop will break when
    the last condition will become false.

    So , if we have multiple conditions in for loop than for loop will consider the last 
    condition.
    */
    int a = 0 , b = 0 ; 
    for( ; a < 4 , b < 6 ; a++ , b++){
      printf("%d ",a); 
    }

    return 0 ; 
}