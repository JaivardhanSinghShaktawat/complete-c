#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ; 
    printf("Enter the size of the array :"); 
    scanf("%d",&n);
    
    int *ptr ; 

    // allocating n*size of int memory in bytes during runtime.
    ptr = (int*) calloc(n,sizeof(int)); 

    for(int i = 0 ; i < n ; i++){
        printf("%d ",*(ptr+i)); 
    }
    // Here all the values are initialized to 0 0 0 0 0 

    // taking input in array 
    for(int i = 0 ; i < n ; i++){
        printf("Enter the %d value : ",i+1);
        scanf("%d",&ptr[i]); 
    }

    // outputting the result

    for(int i = 0 ; i < n ; i++){
        printf("The value at index %d is : %d\n",i+1,*(ptr+i)); 
    }

    free(ptr); // don't forget to free the memory.

    return 0 ; 
}