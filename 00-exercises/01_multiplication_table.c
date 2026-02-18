/* 
Print multiplication table of a number entered by the user in pretty form 

Example : 
Input 
Enter the number you want multiplication table of : 6 

Output:
Table of 6 : 

6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60

*/

#include<stdio.h>

void print_table(int num)
{    
    printf("\nTable of %d : \n\n",num);
    
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}

int main()
{
    int num ; 
    printf("Enter the number you want multiplication table of : ");
    scanf("%d",&num);

    print_table(num);

    return 0 ; 
}
