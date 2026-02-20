/*
Take input from the user and ask user to choose 0 for triangular star pattern and 1 
for reverse triangular star pattern and then print the pattern accordingly.

Print the below star pattern for n = 5. 

Triangular star pattern.

*
**
***
****
*****


Reverse traingular star.

*****
****
***
**
*

*/

#include<stdio.h>
#include<stdbool.h>

// declaring functions. 
void triangular_star_pattern(int);
void reverse_triangular_star_pattern(int); 

int main()
{   
    int type , n ; 

    while(true){

    printf("Select which pattern you want to print\n\n");
    printf("1. Triangular star pattern\n2. Reverse triangular star pattern\n3. -1 to quit the program\n\n"); 

    scanf("%d",&type); 

        switch(type){

            case 1 : printf("Enter the number of rows : "); 
                       scanf("%d",&n);
                       triangular_star_pattern(n);
                       printf("\n");
                       break ; 

            case 2 : printf("Enter the value of n : "); 
                       scanf("%d",&n);
                       reverse_triangular_star_pattern(n);
                       printf("\n");
                       break ; 

            case -1 : printf("Quitting the program...\n"); 
                      goto end ; 

            default : printf("Select the valid option\n");
                      break ; 
        }
    }
    end: // definining the label.

    return 0 ; 
}


void triangular_star_pattern(int n){
    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
            printf("* "); 
        }
        printf("\n"); 
    }
}

void reverse_triangular_star_pattern(int n){
    for(int row = n ; row >= 1 ; row--){
        for(int col = 1 ; col <= row ; col++){
            printf("* "); 
        }
        printf("\n"); 
    }
}