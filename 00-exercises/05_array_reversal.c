// Write a program to reverse the array. 

#include<stdio.h>

void print_array(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]); 
    }
    printf("\n");
}

void reverse_array(int arr[] , int size){
    int start = 0 , end = size-1 ; 
    int temp ; 
    
    while(start < end){
        temp = arr[start] ; 
        arr[start] = arr[end] ; 
        arr[end] = temp ; 
        start++ ; end-- ; 
    }
}

int main()
{
    int n ; 
    printf("Enter the size of the array : ");
    scanf("%d",&n); 

    int arr[n] ;  

    for(int i = 0 ; i < n ; i++){
        printf("Enter the %d element : ",i+1); 
        scanf("%d",&arr[i]);
    }

    printf("Array before reversing : "); 
    print_array(arr,n);

    printf("\nArray after reversing : "); 
    reverse_array(arr , n); 

    print_array(arr,n); 

    return 0 ; 
}

