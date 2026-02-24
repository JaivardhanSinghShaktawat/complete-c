#include<stdio.h>
#include<stdlib.h>

// It returns the bytes that the .exe and a.out file is taking.
// gcc file_name.c ; size ./a.out
int main()
{
    // Use of malloc().

    int *ptr ; 

    // It creates an array of 5 size.
    ptr = (int*) malloc(5*sizeof(int)); // size of int * 5 

    
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter the %d value : ",i+1);
        scanf("%d",(ptr+i)); 
    }
    
    for(int i = 0 ; i < 5 ; i++){
        printf("The value at index %d is : %d\n",i+1,*(ptr+i));
    }

    printf("%d\n",*(ptr+10)); // garbage value will be printed. 

    // Taking input in arrays during runtime. 

    free(ptr); // freeing the allocated memory.

    int n ; 
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    ptr = (int*) malloc(sizeof(int)*n); 

    for(int i = 0 ; i < n ; i++){
        printf("Enter the value at index %d : ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i = 0 ; i < n ; i++){
        printf("The value at index %d is : %d\n",i+1,*(ptr+i)); 
    }

    free(ptr); // don't forget to free the memory.

    return 0 ; 
}