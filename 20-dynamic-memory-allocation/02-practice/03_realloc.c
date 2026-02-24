#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ; 
    printf("Enter the size of the array : "); 
    scanf("%d",&n);

    int *ptr = (int*) malloc(sizeof(int)*10); 
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d",(ptr+i)); 
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",ptr[i]); 
    }

    printf("\n\n"); 

    // using realloc() to change the size of the previously allocated memory.

    printf("Enter the size of the new array : "); 
    scanf("%d",&n); 

    ptr = realloc(ptr,sizeof(int)*n); 

    for(int i = 0 ; i < n ; i++){
        printf("Enter the %d new value of this array : ",i+1);
        scanf("%d",&ptr[i]); 
    }

    for(int i = 0 ; i < n ; i++){
        printf("The new value at index %d is : %d\n",i+1,*(ptr+i)); 
    }

    free(ptr); // deallocating the memory.

    return 0 ; 
}