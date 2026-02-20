#include<stdio.h>

int main()
{
    // declaring an array of size 4 of int type.  
    int marks[4] ; 

    // declaring and initializing the array at the same time. 
    int arr[4] = {2,4,5,6} ; // declaration with initialization.

    marks[0] = 34 ; 

    printf("Marks of student 1 is %d\n",marks[0]); 
    // Output : Marks of student 1 is 34 

    marks[0] = 5 ; 
    marks[1] = 42 ; 
    marks[2] = 414 ; 
    marks[3] = 4 ; 

    printf("Marks of student 1 is %d\n",marks[0]); 
    // Output : Marks of student 1 is 5

    // using for loop to take input. 

    for(int i = 0 ; i < 4 ; i++){
        printf("Enter the marks of student %d : ",i+1); 
        scanf("%d",&marks[i]); 
    }


    // using for loop to output the result.
    for(int i = 0 ; i < 4 ; i++){
        printf("The marks of student %d is %d\n",i+1,marks[i]); 
    }

    // 2D array 

    // Note : In 2d array the second value or column size is mandatory.
    int two_d_arr[][4] = {{2,4,5,8},
                          {6,8,10,2}} ; 

    int two_d_arr2[2][4] = {{2,4,5,8},
                            {6,8,10,2}} ; 

    // printing the elements of the 2d array. 

    for(int row = 0 ; row < 2 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            printf("Row = %d and Column = %d and value = %d\n",row+1,col+1,two_d_arr2[row][col]);
        }
    }

    // printing the 2d array in matrix form. 

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%d ",two_d_arr2[i][j]); 
        }
        printf("\n"); 
    }

    return 0 ; 
}