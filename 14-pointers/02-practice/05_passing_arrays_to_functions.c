#include<stdio.h>
#include<stdint.h>

void func1(int array[],int size){
    for(int i = 0 ; i < size ; i++){
        printf("The value at index %d is %d\n",i , array[i]); 
    }
    array[0] = 1000 ; 
}

void func2(int *ptr , int size){

    for(int i = 0 ; i < size ; i++){
        printf("The value at index %d is %d\n",i,ptr[i]);     
    }

    *(ptr + 2) = 525 ; 
}

int func3(int arr[2][2]){
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("The value at %d,%d is %d\n",i,j,arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8} ; 

    int arr1[][2] = {{2,4},{3,6}}; 

    printf("The value at index 0 is %d\n",arr[0]); 
    // The value at index 0 is 2
    func1(arr,7); // here we are passing base address of the array.
    printf("The value at index 0 is %d\n",arr[0]); 
    // The value at index 0 is 1000

    func2(arr,7); // here also we are passing base address of the array only. 

    printf("The value at index 2 is %d\n",arr[2]); 
    // Output : The value at index 2 is 525

    // passing 2D array to a function.
    func3(arr1); 

    return 0 ; 
}